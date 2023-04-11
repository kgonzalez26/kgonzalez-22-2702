//Este ejemplo pretende mostrar el nivel de adaptación de C a C++, utilizando matrices o arreglos bidimensionales
//Fecha de Creación: 15 de febrero 2023
//Autor Kevin Eduardo González Sosa, 9959-22-2702

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

using namespace std;

const int NUMERO_ALUMNOS = 3;
const int NUMERO_MATERIAS = 4;
const int MAX_CALIFICACION = 100;
const int MIN_CALIFICACION = 0;
const int MAX_LONGITUD_CADENA = 100;

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1]);
void imprimirLineaMatriz();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA]);
int main()
{
    srand(getpid());
    float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1];
    char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA] = {"Mario", "Carlos","Maria"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, alumnos);
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1])
{
    for (int y=0; y < NUMERO_ALUMNOS; y++)
    {
        float sumaNotasAlumno = 0;
        for (int x=0; x < NUMERO_MATERIAS; x++)
        {
            int calificacionAlumno = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            sumaNotasAlumno += (float)calificacionAlumno;
            matriz[y][x] = calificacionAlumno;
        }
        float promedioNotasAlumno = sumaNotasAlumno / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS]=promedioNotasAlumno;
    }
}
void imprimirLineaMatriz()
{
    cout << "+----------------";
    for (int x=0; x < NUMERO_MATERIAS + 1; x++)
    {
        cout <<("--------");
    }
    cout << "+" << endl;
}
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA])
{
    float promedioMayor = matriz[0][NUMERO_MATERIAS];
    float promedioMenor = matriz[0][NUMERO_MATERIAS];
    char alumnoPromedioMayor[MAX_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAX_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAX_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();
    cout <<("!    Alumno\t!");
    for (int x=0; x < NUMERO_MATERIAS; x++)
    {
        cout << "Cal " << x + 1 << "\t!";
    }
    cout << "Promedio!" << endl;
    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_ALUMNOS; y++)
    {
        cout << "!" << alumnos[y] <<"  \t!" ;
        float suma = 0;
        for (int x=0;x < NUMERO_MATERIAS; x++)
            {
                int calificacion = matriz[y][x];
                cout << calificacion <<"\t!";
            }
        float promedio = matriz[y][NUMERO_MATERIAS];
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
        cout.precision(2);
        cout << promedio << "\t!" << endl;
        imprimirLineaMatriz();
    }
    cout << "Promedio mayor: " << alumnoPromedioMayor << " con " << promedioMayor << endl;
    cout << "Promedio menor: " << alumnoPromedioMenor << " con " << promedioMenor << endl;
}

