#include "RamaProcesos9959222702.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

RamaProcesos9959222702::RamaProcesos9959222702()
{
    //ctor
}

RamaProcesos9959222702::~RamaProcesos9959222702()
{
    //dtor
}

void RamaProcesos9959222702::menuProcesos()
{
    fstream file2;
    file2.open("Bitacora.txt", ios::app | ios::out);

    int accion9 = 7018;
    int accion10 = 7019;
    int accion11 = 7020;

    //bitacora consulta;

    bool salir = false;
    int choice2;
	do
    {
	system("cls");

    cout <<"\t\t\t-------------------------------------------------"<<endl;
    cout <<"\t\t\t|         BIENVENIDO AL MENU DE PROCESOS        |"<<endl;
    cout <<"\t\t\t-------------------------------------------------"<<endl;
	cout <<"\t\t\t 1. Proceso de Asignacion de Cursos a Estudiantes"<<endl;
	cout <<"\t\t\t 2. Proceso de Ingreso de Notas"<<endl;
	cout <<"\t\t\t 3. Consulta de Bitacora"<<endl;
	cout <<"\t\t\t 4. Exit"<<endl;

	cout <<"\t\t\t-------------------------------------------------"<<endl;
	cout <<"\t\t\t Opcion a escoger:[1/2/3/4]"<<endl;
	cout <<"\t\t\t-------------------------------------------------"<<endl;
	cout <<"Ingresa tu Opcion: ";
    cin>>choice2;

    switch(choice2)
    {
    case 1:
        //menuAsignacionCursos();
        file2<<"\t\t\tAccion: Reportes Asignacion de cursos Alumnos - " <<accion9<<"\n"<<endl;
		break;
	case 2:
		//menuIngresoNotas();
		file2<<"\t\t\tAccion: Proceso de Ingreso de Notas - " <<accion10<<"\n"<<endl;
		break;
    case 3:
		//consulta.desplegarBitacora();
		file2<<"\t\t\tAccion: Consulta de Bitacora - " <<accion11<<"\n"<<endl;
		system("pause");
		//menuProcesos();
		break;

    default:
        cout<<"\t\t\t\nSaliendo del menu";
	}
	getch();
    }while(choice2!= 4);
}
