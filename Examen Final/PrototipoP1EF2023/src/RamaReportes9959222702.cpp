#include "RamaReportes9959222702.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

RamaReportes9959222702::RamaReportes9959222702()
{
    //ctor
}

RamaReportes9959222702::~RamaReportes9959222702()
{
    //dtor
}

void RamaReportes9959222702::menuReportes()
{
    fstream file2;
    file2.open("Bitacora.txt", ios::app | ios::out);

    int accion12 = 7022;
    int accion13 = 7023;
    int accion14 = 7024;

    bool salir = false;
    int choice3;
	do
    {
	system("cls");

    cout <<"\t\t\t------------------------------------------"<<endl;
    cout <<"\t\t\t|     BIENVENIDO AL MENU DE REPORTES     |"<<endl;
    cout <<"\t\t\t------------------------------------------"<<endl;
	cout <<"\t\t\t 1. Reportes Asignacion de cursos Alumnos"<<endl;
	cout <<"\t\t\t 2. Reportes Asignacion de cursos Maestros"<<endl;
	cout <<"\t\t\t 3. Reportes Alumnos solventes"<<endl;
	cout <<"\t\t\t 4. Exit"<<endl;

	cout <<"\t\t\t------------------------------------------"<<endl;
	cout <<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout <<"\t\t\t------------------------------------------"<<endl;
	cout <<"Ingresa tu Opcion: ";
    cin>>choice3;

    switch(choice3)
    {
    case 1:
        //empleado.desplegar();
        file2<<"\t\t\tAccion: Reportes Asignacion de cursos Alumnos - " <<accion12<<"\n"<<endl;
		break;
	case 2:
	    //ingreso.desplegarUsurios();
	    file2<<"\t\t\tAccion: Reportes Asignacion de cursos Maestros - " <<accion13<<"\n"<<endl;
		break;
    case 3:
	    //ingreso.desplegarUsurios();
	    file2<<"\t\t\tAccion: Reportes Alumnos solventes - " <<accion14<<"\n"<<endl;
		break;

    default:
        cout<<"\t\t\t\nSaliendo del menu";
	}

    }while(choice3!= 4);
    file2.close();
}
