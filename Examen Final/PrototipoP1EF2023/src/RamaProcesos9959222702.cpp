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
    //bitacora consulta;

    bool salir = false;
    int choice;
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
    cin>>choice;

    switch(choice)
    {
    case 1:
        //menuAsignacionCursos();
		break;
	case 2:
		//menuIngresoNotas();
		break;
    case 3:
		//consulta.desplegarBitacora();
		system("pause");
		//menuProcesos();
		break;

    default:
        cout<<"\t\t\t\nSaliendo del menu";
	}
	getch();
    }while(choice!= 4);
}
