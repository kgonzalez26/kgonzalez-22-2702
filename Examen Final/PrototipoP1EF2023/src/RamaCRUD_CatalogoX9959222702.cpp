#include "RamaCRUD_CatalogoX9959222702.h"
#include "RamaAutenticador9959222702.h"


#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

RamaCRUD_CatalogoX9959222702::RamaCRUD_CatalogoX9959222702()
{
    //ctor
}

RamaCRUD_CatalogoX9959222702::~RamaCRUD_CatalogoX9959222702()
{
    //dtor
}

void RamaCRUD_CatalogoX9959222702::menuCatalogos()
{

    fstream file2;
    file2.open("Bitacora.txt", ios::app | ios::out);

    int accion5 = 7006;

    bool salir = false;
    int choice;

	do
    {
	system("cls");

    cout <<"\t\t\t----------------------------------"<<endl;
    cout <<"\t\t\t| BIENVENIDO AL MENU DE CATALOGO |"<<endl;
    cout <<"\t\t\t----------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Registro Alumnos"<<endl;
	cout<<"\t\t\t 2. Ingreso Registro Maestros"<<endl;
	cout<<"\t\t\t 3. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        //menuRegistroAlumnos();
		break;
	case 2:
		//menuRegistroMaestros();
		break;

    default:
        cout<<"\t\t\t\nSaliendo del menu";
	}
	getch();
    }while(choice!= 3);
}

void RamaCRUD_CatalogoX9959222702::menuRegistroAlumnos()
{
    string nombre, apellido, genero;
    int id;
    int dia, mes, dpi, telefono, telefono1;

    //IngresarDatosAlumno alumno1(id, nombre, apellido,genero, dia, mes, dpi, telefono, telefono1);

    bool salir = false;
    int choice;
    int x;

    fstream file2;
    file2.open("Bitacora.txt", ios::app | ios::out);

    int accion0 = 7001;
    int accion1 = 7002;
    int accion2 = 7003;
    int accion3 = 7004;
    int accion4 = 7005;

	do
    {
	system("cls");

    cout <<"\t\t\t---------------------------------------"<<endl;
    cout <<"\t\t\t| MENU DE REGISTRO DE DATOS DE ALUMNO |"<<endl;
    cout <<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso de Datos del Alumno"<<endl;
	cout<<"\t\t\t 2. Busqueda   Datos del Alumno"<<endl;
	cout<<"\t\t\t 3. Modificar  Datos del Alumno"<<endl;
	cout<<"\t\t\t 4. Reporte    Datos del Alumno"<<endl;
	cout<<"\t\t\t 5. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t Opcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
		//alumno1.menuIngresarDatosEmpleado();
		file2<<"\t\t\tAccion: Ingreso Datos del Empleado - " <<accion0<<"\n"<<endl;
		break;
	case 2:
        salir = true;
        break;
    default:
        cout<<"\t\t\t\nSaliendo del menu";
	}
	getch();
    }while(choice!= 2);
    file2.close();
}


void RamaCRUD_CatalogoX9959222702::menuRegistroMaestros()
{
    string nombre, apellido, genero;
    int id;
    int dia, mes, dpi, telefono, telefono1;

    //IngresarDatosAlumno alumno1(id, nombre, apellido,genero, dia, mes, dpi, telefono, telefono1);


    bool salir = false;
    int choice;
    int x;

    fstream file2;
    file2.open("Bitacora.txt", ios::app | ios::out);

    int accion0 = 7001;
    int accion1 = 7002;
    int accion2 = 7003;
    int accion3 = 7004;
    int accion4 = 7005;

	do
    {
	system("cls");

    cout <<"\t\t\t---------------------------------------"<<endl;
    cout <<"\t\t\t| MENU DE REGISTRO DE DATOS DE MAESTRO |"<<endl;
    cout <<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso de Datos del Maestro"<<endl;
	cout<<"\t\t\t 2. Busqueda   Datos del Maestro"<<endl;
	cout<<"\t\t\t 3. Modificar  Datos del Maestro"<<endl;
	cout<<"\t\t\t 4. Reporte    Datos del Maestro"<<endl;
	cout<<"\t\t\t 5. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t Opcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
		//alumno1.menuIngresarDatosEmpleado();
		file2<<"\t\t\tAccion: Ingreso Datos del Empleado - " <<accion0<<"\n"<<endl;
		break;
	case 2:
        salir = true;
        break;
    default:
        cout<<"\t\t\t\nSaliendo del menu";
	}
	getch();
    }while(choice!= 2);
    file2.close();
}

