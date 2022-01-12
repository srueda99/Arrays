#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>

//Tildes en ASCII

char tildeA = 160;
char tildeE = 130;
char tildeI = 161;
char tildeO = 162;
char tildeU = 163;

//Opción 1

void caps(char word[20]) {
	puts("\nResultado: ");
	int i = 0;
	while(i < strlen(word)) {
		printf("%c", toupper(word[i]));
		i++;
	}
}

//Opción 2

void low(char word[20]) {
	puts("\nResultado: ");
	int i = 0;
	while(i < strlen(word)) {
		printf("%c", tolower(word[i]));
		i++;
	}
}

//Opción 3

void mix(char word[20]) {
	puts("\nResultado: ");
	int i = 0;
	while(i < strlen(word)) {
		if(i%2 != 0) {
			printf("%c", tolower(word[i]));			
		}
		else {
			printf("%c", toupper(word[i]));
		}
		i++;
	}
}

//Opción 4

void change(char word[20], char old[5], char newl[5]) {
	puts("\nResultado: ");
	int i = 0;
	while(i < strlen(word)) {
		if(word[i] == old[0]) {
			printf("%c", newl[0]);
		}
		else {
			printf("%c", word[i]);
		}
		i++;
	}
}

//Opción 5

void terminal() {
	puts("Escriba el comando que desa ejecutar en consola: ");
	char cmd[20];
	scanf("%s", &cmd);
	system(cmd);
	while(strcmp(cmd, "salir") != 0) {
		puts("----------------------------------------");
		puts("Ejecute otro comando o escriba 'salir': ");
		scanf("%s", &cmd);
		system(cmd);
	}
}

// Opción 6

void validarIP(char ip[15]) {
	int i = 0;
	int j = 0;
	bool ok = true;
	int count = 1;
	char octeto[3];
	int primerOcteto;
	int segundoOcteto;
	char clase;
	char tipo[20] = "Publica";
	
	if(strlen(ip) > 15 || strlen(ip) < 7) {
		ok = false;
	}
	
	if(ip[0] == '.') {
		ok = false;
	}
	
	while (i < strlen(ip) && ok == true) {
		if(ip[i] != '.') {
			octeto[j] = ip[i];
			j++;
		}
		else {
			if(count == 1) {
				primerOcteto = strtol(octeto, NULL, 10);
			}
			else if (count == 2) {
				segundoOcteto = strtol(octeto, NULL, 10);
			}
			
			if(strtol(octeto, NULL, 10) < 0 || strtol(octeto, NULL, 10) > 255) {
				ok = false;
				break;
			}
			else {
				octeto[1] = NULL;
				octeto[2] = NULL;
				j = 0;
			}
			count++;
		}
		i++;
	}
	
	if(strtol(octeto, NULL, 10) < 0 || strtol(octeto, NULL, 10) > 255) {
		ok = false;
	}
	
	if(primerOcteto >= 1 && primerOcteto <= 127) {
		clase = 'A';
		if(primerOcteto == 10) {
			strcpy(tipo, "Privada");
		}
	}
	else if(primerOcteto >= 128 && primerOcteto <= 191) {
		clase = 'B';
		if(primerOcteto == 172 && (segundoOcteto >= 16 && segundoOcteto <= 31)) {
			strcpy(tipo, "Privada");
		}
	}
	else if(primerOcteto >= 192 && primerOcteto <= 223) {
		clase = 'C';
		if(primerOcteto == 192 && segundoOcteto == 168) {
			strcpy(tipo, "Privada");
		}
	}
	else if(primerOcteto >= 224 && primerOcteto <= 239) {
		clase = 'D';
		strcpy(tipo, "tipo multicast");
	}
	else if(primerOcteto >= 240 && primerOcteto <= 255) {
		clase = 'E';
		strcpy(tipo, "de investigacion");
	}
	else {
		clase = '0';
		strcpy(tipo, "sin tipo");
	}
	
	if(ok == true) {
		printf("\n--------------------");
		printf("\nIP v%clida", tildeA);
		printf("\nClase %c", clase);
		printf("\nIP %s", tipo);
		printf("\n--------------------");
	}
	else {
		puts("----------------------");
		printf("\nLa IP no es v%clida", tildeA);
	}
}

//Opción 7

void ascii() {
	printf("Ingrese el n%cmero del caracter o 0 para salir: ", tildeU);
	int n;
	scanf("%d", &n);
	puts("-----------------");
	printf("ASCII %d: %c\n", n, n);
	puts("-----------------");
	getch();
	while(n != 0) {
		printf("\nIngrese otro n%cmero: ", tildeU);
		scanf("%d", &n);
		if(n == 0) {
			break;
		}
		puts("-----------------");
		printf("ASCII %d: %c\n", n, n);
		puts("-----------------");
		//getch();
	}
}

//Opción 8

int random() {
	int num = rand() % (5+1)+1;
	return num;
}

//Opción 9

void concatenar(char p1[20], char p2[20]) {
	puts("-------------------------------");
	printf("Concatenaci%cn: %s", tildeO, strcat(p1, p2));
}

//Menú

int op = 1;

void main() {
	while (op != 0) {
		printf("\n\n\nMEN%c PRINCIPAL", 233);
		puts("*********************************");
		printf("Elija la opci%cn:\n", tildeO);
		printf("1: Convertir a may%csculas\n", tildeU);
		printf("2: Convertir a min%csculas\n", tildeU);
		printf("3: May%csculas y min%csculas intercaladas\n", tildeU, tildeU);
		puts("4: Reemplazar letra");
		puts("5: Ejecutar comando");
		puts("6: Validar IP");
		puts("7: Convertir a ASCII");
		printf("8: Generar un n%cmero aleatorio\n", tildeU);
		puts("9: Concatenar palabras");
		puts("0: Salir");
		puts("*********************************");
		
		scanf("%d", &op);
		
		switch(op) {
			
			case 1:
				printf("Escriba la palabra: ");
				char word[20];
				scanf("%s", &word);
				caps(word);
				break;
			case 2:
				printf("Escriba la palabra: ");
				char word2[20];
				scanf("%s", &word2);
				low(word2);
				break;
			case 3:
				printf("Escriba la palabra: ");
				char word3[20];
				scanf("%s", &word3);
				mix(word3);
				break;
			case 4:
				printf("Escriba la palabra: ");
				char word4[20];
				scanf("%s", &word4);
				printf("Escriba la letra a reemplazar: ");
				char old[5];
				scanf("%s", &old);
				printf("Escriba por cu%cl caracter reemplazar: ", tildeA);
				char newl[5];
				scanf("%s", &newl);
				change(word4, old, newl);
				break;
			case 5:
				terminal();
				break;
			case 6:
				puts("Ingrese una IP:");
				char ip[15];
				scanf("%s", &ip);
				validarIP(ip);
				break;
			case 7:
				ascii();
				break;
			case 8:
				printf("\nEl n%cmero aleatorio es: %d", tildeU, random());
				break;
			case 9:
				puts("Ingrese dos palabras");
				printf("Palabara 1: ");
				char p1[20];
				scanf("%s", &p1);
				printf("Palabara 2: ");
				char p2[20];
				scanf("%s", &p2);
				concatenar(p1, p2);
				break;
			case 0:
				puts("Saliendo...");
				break;
			default:
				printf("Opci%cn no v%clida", tildeO, tildeA);
			break;
		}
	}
}