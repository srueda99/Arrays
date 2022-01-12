#ifndef _FUNCIONESH_
#define _FUNCIONESH_

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Tildes en ASCII

char tildeA = 160;
char tildeE = 130;
char tildeI = 161;
char tildeO = 162;
char tildeU = 163;

//Funciones

void caps(char word[20]);
void low(char word[20]);
void mix(char word[20]);
void change(char word[20], char old[5], char newl[5]);
void terminal();
void validarIP(char ip[15]);
void ascii();
int random();
void concatenar(char p1[20], char p2[20]);

#include  "funciones.c"
#endif
