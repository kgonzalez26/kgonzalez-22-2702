#include "imprimirMatriz.h"
#include <iostream>
#include <iomanip>

using namespace std;

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) +1); //Devuelve un numero aleatorio
}

void menuPrincipal()
{
    char opcion;
    int opciones;
    bool repetir = true;
    do{
        system("cls");
        cout << "\n\tSIMULADOR PUNTUACIONES DE EQUIPOS EN LA LIGA"<< endl;
        cout << "\n\t--------------------------------------------\n"<< endl;
        cout << "\n\n\t\tMENU PRINCIPAL"<< endl;
        cout << "\t\t-----------------"<< endl;
        cout << "\t1. Desplegar matriz con promedio de LIGAS"<< endl;
        cout << "\t2. ----------------SALIR-----------------"<< endl;
        cout << "\n Ingrese una opcion: ";
        cin >> opciones;

        switch (opciones){
        case 1:
            matrizLiga();
            break;

        case 2:
            cout << "\n\tSaliendo del programa"<<endl;
            repetir = false;
            break;
        }
    }while(repetir);
}

void matrizLiga()
{
    system("cls");
    srand(getpid());
    float matriz1 [NUM_EQUIPOS][A2010+1];
    float matriz2 [NUM_EQUIPOS][A2011+1];
    float matriz3 [NUM_EQUIPOS][A2012+1];
    float matriz4 [NUM_EQUIPOS][A2014+1];

    char equipos[NUM_EQUIPOS][MAX_LONGITUD_CADENA] = {"Equipo Catedras","Equipo Heraldos","Equipo Azules","Equipo Subnauticos","Equipo Volantes"};

    llenarMatriz1(matriz1);
    llenarMatriz2(matriz2);
    llenarMatriz3(matriz3);
    llenarMatriz4(matriz4);

    imprimirMatriz(matriz1,matriz2,matriz3,matriz4, equipos);

    system ("pause > nul");
}

void imprimirLineaMatriz()
{
    cout <<"+--------------------------------------------";
    for (int x=0; x < A2012; x++) //Imprime bloques de guiones para crear una linea que represente la matriz
    {
        cout<<"---------------------------------------------------------------------";
    }
    cout <<"+\n";
}

void llenarMatriz1(float matriz1[NUM_EQUIPOS][A2010+1])
{
    for (int y=0; y <  NUM_EQUIPOS; y++)
    {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < A2010; x++)
        {
           int puntuacionEquipo = busquedaAleatorios(MIN_PUNTAJE, MAX_PUNTAJE);
           sumaNotasEquipo += (float)puntuacionEquipo; //el float convierte de entero "int" a flotante
           matriz1 [y][x] = puntuacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / A2010;
        matriz1 [y][A2010]=promedioNotasEquipo;

    }
}
void llenarMatriz2(float matriz2[NUM_EQUIPOS][A2011+1]) //llenado de matriz
{
    for (int y=0; y <  NUM_EQUIPOS; y++)
    {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < A2011; x++)
        {
           int puntuacionEquipo = busquedaAleatorios(MIN_PUNTAJE, MAX_PUNTAJE);
           sumaNotasEquipo += (float)puntuacionEquipo; //el float convierte de entero "int" a flotante
           matriz2 [y][x] = puntuacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / A2011;
        matriz2 [y][A2011]=promedioNotasEquipo;

    }
}
void llenarMatriz3(float matriz3[NUM_EQUIPOS][A2012+1]) //llenado de matriz
{
    for (int y=0; y <  NUM_EQUIPOS; y++)
    {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < A2012; x++)
        {
           int puntuacionEquipo = busquedaAleatorios(MIN_PUNTAJE, MAX_PUNTAJE);
           sumaNotasEquipo += (float)puntuacionEquipo; //el float convierte de entero "int" a flotante
           matriz3 [y][x] = puntuacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / A2012;
        matriz3 [y][A2012]=promedioNotasEquipo;

    }
}
void llenarMatriz4(float matriz4[NUM_EQUIPOS][A2014+1]) //llenado de matriz
{
    for (int y=0; y <  NUM_EQUIPOS; y++)
    {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < A2014; x++)
        {
           int puntuacionEquipo = busquedaAleatorios(MIN_PUNTAJE, MAX_PUNTAJE);
           sumaNotasEquipo += (float)puntuacionEquipo; //el float convierte de entero "int" a flotante
           matriz4 [y][x] = puntuacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / A2014;
        matriz4 [y][A2014]=promedioNotasEquipo;

    }
}

void imprimirMatriz (float matriz1 [NUM_EQUIPOS][A2010+1] , float matriz2 [NUM_EQUIPOS][A2011+1] , float matriz3 [NUM_EQUIPOS][A2012+1], float matriz4 [NUM_EQUIPOS][A2014+1], char alumnos[NUM_EQUIPOS][MAX_LONGITUD_CADENA])
{

    float mejorLiga, mejorLigaNum, notaMayor, notaMenor, mejorEquipo, mejorEquiNum, promedioGen;
    char ligas[NUM_LIGAS][MAX_LONGITUD_CADENA] = {"LIGA INFANTIL GAND","LIGA AMATEUR GAND","LIGA PROFESIONAL GAND"};
    char equipos[NUM_EQUIPOS][MAX_LONGITUD_CADENA] = {"Equipo Catedras","Equipo Heraldos","Equipo Azules","Equipo Subnauticos","Equipo Volantes"};
    float equipoMayor, equipoMenor;

    for (int f = 0; f < NUM_LIGAS; f++)
    {
        llenarMatriz1(matriz1);
        llenarMatriz2(matriz2);
        llenarMatriz3(matriz3);
        llenarMatriz4(matriz4);

        cout << "\n\nPuntajes para la " << ligas[f] << endl;

        float promedioMayor1 = matriz1[0][A2011]; //matriz
        float promedioMenor1 = matriz1[0][A2011]; //matriz
        float promedioMayor2 = matriz2[0][A2010]; //matriz
        float promedioMenor2 = matriz2[0][A2010]; //matriz
        float promedioMayor3 = matriz3[0][A2012]; //matriz
        float promedioMenor3 = matriz3[0][A2012]; //matriz
        float promedioMayor4 = matriz4[0][A2014]; //matriz
        float promedioMenor4 = matriz4[0][A2014]; //matriz

        char equipoPromedioMayor [MAX_LONGITUD_CADENA]; //vector
        char equipoPromedioMenor [MAX_LONGITUD_CADENA]; //vector

        imprimirLineaMatriz();
        cout <<"|  Equipo\t\t|";
        for (int x=0; x < A2010; x++)
        {
            cout<<"   Año 2010   |";
        }
        for (int x=0; x < A2011; x++)
        {
            cout<<"\tAño 2011 |";
        }
        for (int x=0; x < A2012; x++)
        {
            cout<<"\tAño 2012 |";
        }
        for (int x=0; x < A2014; x++)
        {
            cout<<"\tAño 2014 |";
        }

        cout <<("promedio       |\n");
        imprimirLineaMatriz();
        float puntajeMayor;
        float puntajeMenor=50;//Define las variables para el mayor y menor puntaje

        for (int y=0; y< NUM_EQUIPOS; y++)
        {
            cout <<"|  "<<equipos[y]<<"\t|";
            float suma = 0;
            for (int x=0; x< A2010; x++)
            {
                int puntuacion = matriz1[y][x];
                cout <<"\t"<<puntuacion<<"\t|";
            }
            for (int x=0; x< A2011; x++)
            {
                int puntuacion = matriz2[y][x];
                cout <<"\t"<<puntuacion<<"\t|";
            }
            for (int x=0; x< A2012; x++)
            {
                int puntuacion = matriz3[y][x];
                cout <<"\t"<<puntuacion<<"\t|";
            }
            for (int x=0; x< A2014; x++)
            {
                int puntuacion = matriz4[y][x];
                cout <<"\t"<<puntuacion<<"\t|";
            }

            float total = matriz1 [y][A2011]+matriz2 [y][A2010]+matriz3 [y][A2012]+matriz4 [y][A2014];
            promedioGen+=total;//Suma y promedia todas las puntuaciones

            float promedio = (total)/4;
            cout<<"\t"<< fixed << setprecision(2)<< (double) promedio<<"    |\n";
            if(promedio>puntajeMayor)
            {
                puntajeMayor=promedio;//95% de exito
                equipoMayor= y;
            }
            if(promedio<puntajeMenor)
            {
                puntajeMenor=promedio;//95% de exito
                equipoMenor= y;
            }
            imprimirLineaMatriz();

        }
        int y = equipoMayor;
        int z = equipoMenor;
        cout << "El equipo con la puntuacion promedio mas alta de la Liga es " << equipos[y] << " con "<< puntajeMayor << endl;
        cout << "El equipo con la puntuacion promedio mas baja de la Liga es " << equipos[z] << " con "<< puntajeMenor << endl;

        if(puntajeMayor>mejorLiga)
        {
            mejorLiga = puntajeMayor;
            mejorLigaNum = f;
        }
        if(equipoMayor>mejorEquipo)
        {
            mejorEquipo = equipoMayor;
            mejorEquiNum = y;
        }
    }

    //Colocar promedio y competencias de las ligas
    int f = mejorLigaNum;   //Mejor liga
    int j = mejorEquiNum;   //Mejor equipo 3 ligas
    promedioGen= promedioGen/60;          //Promedio general

    cout << "\nLa mejor Liga es: " << ligas[f] << endl;
    cout << "El mejor Equipo de las 3 Ligas: " << equipos[j]<< endl;
    cout << "Promedio general de las 3 Ligas: " << promedioGen << endl;
}
