#ifndef IMPRIMIRMATRIZ_H
#define IMPRIMIRMATRIZ_H
#include <iostream>
#include <iomanip>

const int NUM_LIGAS = 3;
const int NUM_EQUIPOS = 5;
const int MAX_LONGITUD_CADENA = 50;

const int MIN_PUNTAJE = 0;
const int MAX_PUNTAJE = 50;

const int A2010 = 1;
const int A2011 = 1;
const int A2012 = 1;
const int A2014 = 1;

//Definiendo funciones a utilizar...
void llenarMatriz1(float matriz1[NUM_EQUIPOS][A2011+1]);
void llenarMatriz2(float matriz2[NUM_EQUIPOS][A2010+1]);
void llenarMatriz3(float matriz3[NUM_EQUIPOS][A2012+1]);
void llenarMatriz4(float matriz4[NUM_EQUIPOS][A2014+1]);

void imprimirLineaMatriz();
void imprimirMatriz (float matriz [NUM_EQUIPOS][A2011+1] , float matriz1 [NUM_EQUIPOS][A2010+1] , float matriz2 [NUM_EQUIPOS][A2012+1], float matriz3 [NUM_EQUIPOS][A2014+1], char equipos[NUM_EQUIPOS][MAX_LONGITUD_CADENA]);

void menuPrincipal();
void matrizLiga();

#endif // IMPRIMIRMATRIZ_H
