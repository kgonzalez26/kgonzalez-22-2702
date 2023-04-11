//Este ejemplo pretende mostrar el sistema de notas de la Universidad Mariano Galvez a traves de matrices en lenguaje C++
//Fecha de Creación: 15 de febrero 2023
//Autor Kevin Eduardo González Sosa, 9959-22-2702

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

using namespace std;

const int NUMERO_ALUMNOS = 10;
const int NUMERO_MATERIAS = 5;
const int NUMERO_PARCIALES = 3;
const int MAX_CALIFICACIONACT = 20;
const int MAX_CALIFICACIONPA1 = 20;
const int MAX_CALIFICACIONPA2 = 25;
const int MAX_CALIFICACIONPA3 = 35;
const int MIN_CALIFICACION = 0;
const int MAX_LONGITUD_CADENA = 100;

int busquedaAleatorios(int minimo, int maximo);
int busquedaAleatoriosAct(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_PARCIALES + 1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_PARCIALES + 1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA]);


int main()
{
    srand(getpid());
    float matriz[NUMERO_ALUMNOS][NUMERO_PARCIALES + 1];
    char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA] = {"Marcos","Laura","Melany","Steven","Juan","Oswaldo","Amilcar","Daniela","Francisco","Xavier"};
    char cursos[NUMERO_MATERIAS][MAX_LONGITUD_CADENA] = {"Proceso Administrativo","Programacion I","Derecho Informatico","Calculo I","Fisica I"};

    for (int g = 0; g < NUMERO_MATERIAS; g++)
    {
        cout << "Notas para el curso de " << cursos[g] << endl;
        llenarMatriz(matriz);
        imprimirMatriz(matriz, alumnos);
    }   //Creacion de matrices para cada curso
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_PARCIALES+1])
{
    for (int y=0; y < NUMERO_ALUMNOS; y++)
    {
        float sumaNotasAlumno = 0;
        for (int x=0; x < NUMERO_PARCIALES; x++)
        {
            int actividades = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACIONACT);
            sumaNotasAlumno += (float)actividades;
            matriz[y][x] = actividades;
        }
        float promedio = sumaNotasAlumno / NUMERO_MATERIAS;
        matriz[y][NUMERO_PARCIALES]= promedio;
    }
}


void imprimirMatrizLinea() //Crear la figura de la matriz
{

    int x;
    cout << "+----------";

    for (x = 0; x < NUMERO_PARCIALES + 2; x++)
    {
        cout << "+------------";
    }
    cout << "+\n";
}
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_PARCIALES + 1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_PARCIALES];
    float promedioMenor = matriz[0][NUMERO_PARCIALES];
    char alumnoPromedioMayor[MAX_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAX_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAX_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAX_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(10) << "Alumno ";
    cout << setw(13) << "Actividades";
    for (x = 0; x < NUMERO_PARCIALES; x++)
    {
        cout << setw(12) << "Parcial " << x + 1;
    }
    cout << setw(13) << " Nota final" << endl;

    imprimirMatrizLinea();  //Llenar las notas de los alumnos
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        cout << "!" << setw(10) << alumnos[y] << "!";

        float suma = 0;
        int actividades = matriz[y][x];
        cout << setw(12) << actividades << "!";

        for (x = 0; x < NUMERO_PARCIALES; x++)
        {
            int calificacion1 = matriz[y][x];
            cout << setw(12) << calificacion1 << "!";
        }

        float promedio = matriz[y][NUMERO_PARCIALES];//Se toma al alumno con mayor y menor promedio
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAX_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAX_LONGITUD_CADENA);
        }
        cout.precision(4);
        cout << setw(12) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    cout << "Promedio mayor: " << alumnoPromedioMayor << " con " << promedioMayor << endl;
    cout << "Promedio menor: " << alumnoPromedioMenor << " con " << promedioMenor << endl;
    cout << "\n" <<endl;

}
