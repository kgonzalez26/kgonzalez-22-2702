//En este programa se pretende mostrar un sistema para gestionar ligas de deportes
//Autor: Kevin Eduardo González Sosa
//Carnet: 9959-22-27202

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int NUM_LIGAS = 3;
const int NUM_EQUIPOS = 5;
const int MAX_LONGITUD_CADENA = 50;

const int MIN_PUNTAJE = 0;
const int MAX_PUNTAJE = 0;

const int A2011 = 1;
const int NOTA = 1;
const int SPARCIAL = 1;
const int PARCIALF = 1;

const int MAX_NOTA = 50;
const int MIN_NOTA = 0;
const int MAX_PPARCIAL = 50;
const int MIN_PPARCIAL = 0;
const int MAX_SPARCIAL = 50;
const int MIN_SPARCIAL = 0;
const int MAX_PARCIALF = 50;
const int MIN_PARCIALF = 0;


void llenarMatriz(float matriz[NUM_EQUIPOS][A2011+1]);
void llenarMatriz1(float matriz1[NUM_EQUIPOS][NOTA+1]);
void llenarMatriz2(float matriz2[NUM_EQUIPOS][SPARCIAL+1]);
void llenarMatriz3(float matriz3[NUM_EQUIPOS][PARCIALF+1]);

void imprimirLineaMatriz();
void imprimirMatriz (float matriz [NUM_EQUIPOS][A2011+1] , float matriz1 [NUM_EQUIPOS][NOTA+1] , float matriz2 [NUM_EQUIPOS][SPARCIAL+1], float matriz3 [NUM_EQUIPOS][PARCIALF+1], char equipos[NUM_EQUIPOS][MAX_LONGITUD_CADENA]);


void menuPrincipal();
void matrizLiga();


int main()
{
    menuPrincipal();
    return 0;
}

int busquedaAleatorios(int minimo, int maximo)
 {
     return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) +1); //Devuelve un numero aleatorio
 }

void menuPrincipal(){
    char opcion;
    int opciones;
    bool repetir = true;
    do{
        system("cls");
        cout << "\n\nSIMULADOR PUNTUACIONES DE EQUIPOS EN LA LIGA"<< endl;
        cout << "\n--------------------------------------------\n"<< endl;
        cout << "\n\n\t\tMENU PRINCIPAL"<< endl;
        cout << "\t\t-----------------"<< endl;
        cout << "\t1. Ingreso a promedio LIGAS"<< endl;
        cout << "\t2. --------SALIR--------"<< endl;
        cout << "\n\t Ingrese una opcion: ";
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

    srand(getpid()); //habilita la funcion de stdlib, cuando utilizo el rand (numero random)
    float matriz1 [NUM_EQUIPOS][NOTA+1];//definimos la matriz
    float matriz [NUM_EQUIPOS][A2011+1];
    float matriz2 [NUM_EQUIPOS][SPARCIAL+1];
    float matriz3 [NUM_EQUIPOS][SPARCIAL+1];

    char equipos[NUM_EQUIPOS][MAX_LONGITUD_CADENA] = {"Equip. Catedras","Equip. Heraldos","Equip. Azules","Equip. Subnauticos","Equip. Volantes"};
    llenarMatriz(matriz);
    llenarMatriz1(matriz1);
    llenarMatriz2(matriz2);
    llenarMatriz2(matriz3);

    imprimirMatriz(matriz,matriz1,matriz2,matriz3, equipos);

    cout << "\nPara cambiar los puntajes por favor reinicie el programa" <<endl;

    system ("pause > nul");
}

 void imprimirLineaMatriz()
 {
     cout <<"+--------------------------------------------";
     for (int x=0; x < SPARCIAL; x++) //imprime bloques de guiones para llenar la matriz
     {
        cout<<"---------------------------------------------------------------------";
     }
     cout <<"+\n";
 }


void llenarMatriz(float matriz[NUM_EQUIPOS][A2011+1]) //llenado de matriz
 {
     for (int y=0; y <  NUM_EQUIPOS; y++)
     {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < A2011; x++)
        {
           int calificacionEquipo = busquedaAleatorios(MIN_PPARCIAL, MAX_PPARCIAL);
           sumaNotasEquipo += (float)calificacionEquipo; //el float convierte de entero "int" a flotante
           matriz [y][x] = calificacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / A2011;
        matriz [y][A2011]=promedioNotasEquipo;

    }
 }
void llenarMatriz1(float matriz1[NUM_EQUIPOS][NOTA+1]) //llenado de matriz
 {
     for (int y=0; y <  NUM_EQUIPOS; y++)
     {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < NOTA; x++)
        {
           int calificacionEquipo = busquedaAleatorios(MIN_NOTA, MAX_NOTA);
           sumaNotasEquipo += (float)calificacionEquipo; //el float convierte de entero "int" a flotante
           matriz1 [y][x] = calificacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / NOTA;
        matriz1 [y][NOTA]=promedioNotasEquipo;

 }
 }
  void llenarMatriz2(float matriz2[NUM_EQUIPOS][SPARCIAL+1]) //llenado de matriz
 {
     for (int y=0; y <  NUM_EQUIPOS; y++)
     {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < SPARCIAL; x++)
        {
           int calificacionEquipo = busquedaAleatorios(MIN_SPARCIAL, MAX_SPARCIAL);
           sumaNotasEquipo += (float)calificacionEquipo; //el float convierte de entero "int" a flotante
           matriz2 [y][x] = calificacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / SPARCIAL;
        matriz2 [y][SPARCIAL]=promedioNotasEquipo;

 }
 }
 void llenarMatriz3(float matriz3[NUM_EQUIPOS][PARCIALF+1]) //llenado de matriz
 {
     for (int y=0; y <  NUM_EQUIPOS; y++)
     {
        float sumaNotasEquipo=0;//la suma de todos
        for (int x=0; x < PARCIALF; x++)
        {
           int calificacionEquipo = busquedaAleatorios(MIN_PARCIALF, MAX_PARCIALF);
           sumaNotasEquipo += (float)calificacionEquipo; //el float convierte de entero "int" a flotante
           matriz3 [y][x] = calificacionEquipo;
        }
        float promedioNotasEquipo = sumaNotasEquipo / PARCIALF;
        matriz3 [y][SPARCIAL]=promedioNotasEquipo;

 }
 }




 void imprimirMatriz (float matriz [NUM_EQUIPOS][A2011+1] , float matriz1 [NUM_EQUIPOS][NOTA+1] , float matriz2 [NUM_EQUIPOS][SPARCIAL+1], float matriz3 [NUM_EQUIPOS][PARCIALF+1], char alumnos[NUM_EQUIPOS][MAX_LONGITUD_CADENA])
{

    float mejorLiga=0;
    float mejorLigaNum=0;
    float notaMayor, notaMenor;
    int mejorEquiFac=0;
    float mejorEquiFacNum=0;
    float promedioGenFac=0;
    char ligas[NUM_LIGAS][MAX_LONGITUD_CADENA] = {"LIGA INFANTIL GANDS","LIGA AMATEUR GANDS","LIGA PROFESIONAL GANDS"};
    char equipos[NUM_EQUIPOS][MAX_LONGITUD_CADENA] = {"Equip. Catedras","Equip. Heraldos","Equip. Azules","Equip. Subnauticos","Equip. Volantes"};

    for (int f = 0; f < NUM_LIGAS; f++)
    {
        llenarMatriz(matriz);
        llenarMatriz1(matriz1);
        llenarMatriz2(matriz2);
        llenarMatriz2(matriz3);


        cout << "\n\nPuntajes para la " << ligas[f] << endl;

        float promedioMayor = matriz[0][A2011]; //matriz
        float promedioMenor = matriz[0][A2011]; //matriz
        float promedioMayor1 = matriz1[0][NOTA]; //matriz
        float promedioMenor1 = matriz1[0][NOTA]; //matriz
        float promedioMayor2 = matriz2[0][SPARCIAL]; //matriz
        float promedioMenor2 = matriz2[0][SPARCIAL]; //matriz
        float promedioMayor3 = matriz3[0][PARCIALF]; //matriz
        float promedioMenor3 = matriz3[0][PARCIALF]; //matriz

        char alumnoPromedioMayor [MAX_LONGITUD_CADENA]; //vector
        char alumnoPromedioMenor [MAX_LONGITUD_CADENA]; //vector

        imprimirLineaMatriz();
        cout <<"|  Equipo\t\t|";
        for (int x=0; x < NOTA; x++)
        {
            cout<<"   Año 2010   |";
        }
        for (int x=0; x < A2011; x++)
        {
            cout<<"\tAño 2011 |";
        }
        for (int x=0; x < SPARCIAL; x++)
        {
            cout<<"\tAño 2012 |";
        }
        for (int x=0; x < PARCIALF; x++)
        {
            cout<<"\tAño 2014 |";
        }

        cout <<("promedio       |\n");
        imprimirLineaMatriz();
        float notaMayor=0;
        float alumnoMayor;
        for (int y=0; y< NUM_EQUIPOS; y++)
        {
            cout <<"|  "<<equipos[y]<<"\t|";
            float suma = 0;
            for (int x=0; x< NOTA; x++)
            {
                int calificacion = matriz[y][x];
                cout <<"\t"<<calificacion<<"\t|";
            }
            for (int x=0; x< A2011; x++)
            {
                int calificacion = matriz1[y][x];
                cout <<"\t"<<calificacion<<"\t|";
            }
            for (int x=0; x< SPARCIAL; x++)
            {
                int calificacion = matriz2[y][x];
                cout <<"\t"<<calificacion<<"\t|";
            }

            float zona = matriz [y][A2011]+matriz1 [y][NOTA]+matriz2 [y][SPARCIAL]+matriz3 [y][PARCIALF];
            promedioGenFac+=zona;


            if (zona > 0)
            {
                for (int x=0; x< PARCIALF; x++)
                {
                    int calificacion = matriz3[y][x];
                    cout <<"\t"<<calificacion<<"\t|";
                }


                float promedio = (zona)/4;
                cout<<"\t"<< fixed << setprecision(2)<< (double) promedio<<"    |\n";
                if(promedio>notaMayor)
                {
                    notaMayor=promedio;//95% de exito
                    alumnoMayor= y;
                }


            }
            imprimirLineaMatriz();

        }
    int y = alumnoMayor;
    cout << "El mejor equipo de la Liga es " << equipos[y] << " con "<< notaMayor << endl;

    if(notaMayor>mejorLiga)
    {
        mejorLiga = notaMayor;
        mejorLigaNum = f;
    }
    if(alumnoMayor>mejorEquiFac)
    {
        mejorEquiFac = alumnoMayor;
        mejorEquiFacNum = y;
    }
    }


    //Colocar promedio y competencias de las ligas
    int f = mejorLigaNum;    //Mejor liga
    int j = mejorEquiFacNum;   //Mejor equipo 3 ligas
    promedioGenFac= promedioGenFac/15;          //Promedio general

    cout << "\nLa mejor Liga es: " << ligas[f] << endl;
    cout << "El mejor Equipo por las 3 Ligas: " << equipos[j]<< endl;
    cout << "Promedio general de las 3 Ligas: " << promedioGenFac << endl;

    system ("pause > nul");
}



//Creacion de matrices para cada facultad en el mismo plano, trabajar desde aqui...

