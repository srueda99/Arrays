#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char tildeA = 160;
char tildeE = 130;
char tildeI = 161;
char tildeO = 162;
char tildeU = 163;

void caps(char word[20]) {
	puts("\nResultado: ");
	int i = 0;
	while(i < strlen(word)) {
		printf("%c", toupper(word[i]));
		i++;
	}
}

void low(char word[20]) {
	puts("\nResultado: ");
	int i = 0;
	while(i < strlen(word)) {
		printf("%c", tolower(word[i]));
		i++;
	}
}

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


int op = 1;

void main() {
	while (op != 0) {
		puts("\n\n\nMENU PRINCIPAL");
		puts("*********************************");
		printf("Elija la opci%cn:\n", tildeO);
		printf("1: Convertir a may%csculas\n", tildeU);
		printf("2: Convertir a min%csculas\n", tildeU);
		printf("3: May%csculas y min%csculas intercaladas\n", tildeU, tildeU);
		puts("4: Reemplazar letra");
		puts("5: Ejecutar comando");
		puts("0: Salir");
		puts("*********************************");
		
		scanf("%d", &op);
		
		switch(op) {
			
			case 1:
				printf("Escribe la palabra: ");
				char word[20];
				scanf("%s", &word);
				caps(word);
				break;
			case 2:
				printf("Escribe la palabra: ");
				char word2[20];
				scanf("%s", &word2);
				low(word2);
				break;
			case 3:
				printf("Escribe la palabra: ");
				char word3[20];
				scanf("%s", &word3);
				mix(word3);
				break;
			case 4:
				printf("Escribe la palabra: ");
				char word4[20];
				scanf("%s", &word4);
				printf("Escribe la letra a reemplazar: ");
				char old[5];
				scanf("%s", &old);
				printf("Escribe por cu%cl caracter reemplazar: ", tildeA);
				char newl[5];
				scanf("%s", &newl);
				change(word4, old, newl);
				break;
			case 5:
				terminal();
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
