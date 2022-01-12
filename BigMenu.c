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
		
		printMenu();
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
