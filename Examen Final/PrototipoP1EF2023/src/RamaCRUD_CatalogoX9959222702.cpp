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
        menuRegistroAlumnos();
		break;
	case 2:
		menuRegistroMaestros();
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
		IngresarDatosAlumno();
		file2<<"\t\t\tAccion: Ingreso de Datos del Alumno - " <<accion0<<"\n"<<endl;
		break;
    case 2:
		//alumno1.menuBuscarDatosAlumno();
		file2<<"\t\t\tAccion: Busqueda   Datos del Alumno - " <<accion1<<"\n"<<endl;
		break;
    case 3:
		//alumno1.menuModificarDatosAlumno();
		file2<<"\t\t\tAccion: Modificar  Datos del Alumno - " <<accion2<<"\n"<<endl;
		break;
    case 4:
		//alumno1.menuReporteDatosAlumno();
		file2<<"\t\t\tAccion: Reporte    Datos del Alumno - " <<accion3<<"\n"<<endl;
		break;
	case 5:
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
    int choice1;
    int x;

    fstream file2;
    file2.open("Bitacora.txt", ios::app | ios::out);

    int accion4 = 7005;
    int accion5 = 7006;
    int accion6 = 7007;
    int accion7 = 7008;

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
    cin>>choice1;

    switch(choice1)
    {
    case 1:
		//alumno1.menuIngresarDatosEmpleado();
		file2<<"\t\t\tAccion: Ingreso de Datos del Maestro - " <<accion4<<"\n"<<endl;
		break;
    case 2:
		//alumno1.menuIngresarDatosEmpleado();
		file2<<"\t\t\tAccion: Busqueda   Datos del Maestro - " <<accion5<<"\n"<<endl;
		break;
    case 3:
		//alumno1.menuIngresarDatosEmpleado();
		file2<<"\t\t\tAccion: Modificar  Datos del Maestro - " <<accion6<<"\n"<<endl;
		break;
    case 4:
		//alumno1.menuIngresarDatosEmpleado();
		file2<<"\t\t\tAccion: Reporte    Datos del Maestro - " <<accion7<<"\n"<<endl;
		break;
	case 5:
        salir = true;
        break;
    default:
        cout<<"\t\t\t\nSaliendo del menu";
	}
	getch();
    }while(choice1!= 5);
    file2.close();
}

void RamaCRUD_CatalogoX9959222702::IngresarDatosAlumno()
{
    system("cls");
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar Datos Personales ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id Persona         : ";//Solicita al usuario que ingrese el ID de la persona y lo almacena en la variable id.
	cin>> id;
	cout<<"\t\t\tNombre: ";//Solicita al usuario que ingrese el nombre del empleado y lo almacena en la variable nombre.
	cin >> nombre;
    cout << "\t\t\tApellido: ";//Solicita al usuario que ingrese el apellido del empleado y lo almacena en la variable apellido.
    cin >> apellido;
    cout << "\t\t\tGenero: ";//Solicita al usuario que ingrese el género del empleado y lo almacena en la variable genero.
    cin >> genero;

    insertar1();
}

void RamaCRUD_CatalogoX9959222702::insertar1()
{
	    //Limpia la pantalla
    system("cls");

    //Declara variables necesarias
    char x;


    //Crea un objeto filestream para trabajar con archivos
    fstream file;

    //Imprime texto en la consola
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n-------------------------------------------------Agregar Alumno-----------------------------------------------------"<<endl;

    //Pide al usuario si desea agregar un alumno
    cout<<"\t\t\t\n¿Quiere agregar al alumno?(Y,N): ";
    cin>>x;

    //Si el usuario elige "y" o "Y", entra al bloque de código dentro del if
    if (x=='y'||x=='Y'){

        string facultad = "o";
        string ciclo = "o";
        string curso = "o";
        string seccion = "o";



        //Abre el archivo "ParticipantRecord1.txt" para guardar como archivo de acceso aleatorio
        file.open("Record1.txt", ios::app | ios::out);
        file<<std::left<<std::setw(10)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< genero
            <<std::left<<std::setw(15)<< facultad <<std::left<<std::setw(15)<< ciclo <<std::left<<std::setw(15)<< curso <<std::left<<std::setw(15)<< seccion << "\n";

        file.close();

         cout << "Alumno guardado exitosamente" << endl;

    }
}

/*void DatosEmpleado::buscar()
{
    system("cls");
	fstream file;
	int found=0;
	file.open("ParticipantRecord1.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Alumno buscada------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		int participant_id;
		cout<<"\n-------------------------Datos de Alumno buscada------------------------"<<endl;
		cout<<"\nIngrese Id de la Alumno que quiere buscar: ";
		cin>>participant_id;
		file >> id >>nombre >>apellido >>genero >>puesto >>departamento >>dia >>mes >>dpi >>telefono >>telefono1 >>numCuenta >>sueldo >>bonificacionIncentiva >>comisiones >>percepciones_extra >>horas_extra >>total_percepciones >>isr >>iggs >>irtra >>prestamos >>deducciones_totales >>sueldo_liquido;
		while(!file.eof())
		{
			if(participant_id==id)
			{
                cout <<"\n\n\t\t\t Id Persona: "<<id<<endl;
                cout << "|" << setw(20) << "         Datos del Alumno         |" ;
                cout << "| " << "Nombre:          " << setw(12) << left << nombre << " " << apellido
                     << setw(1) << right << "|" << endl;

                cout << "| " << setw(116) << right
                     << "|" << endl;

                cout << "| " << "Fecha de emision: " << dia << "/" << setw(94) << left << mes
                     << "|" << endl;
				found++;
			}
			file >> id>>nombre >>apellido >>genero >>facultad >>irtra >>prestamos >>deducciones_totales >>sueldo_liquido;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Persona no encontrada...";
		}
		file.close();
	}
}*/
