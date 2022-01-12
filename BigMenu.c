#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>
#include "funciones.h"

//Menú

int op = 1;

void main() {
	while (op != 0) {
		printf("\n\n\nMEN%c PRINCIPAL\n", 233);
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
