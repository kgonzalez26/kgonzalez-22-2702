#include "RamaMenuGeneral9959222702.h"
#include "RamaAutenticador9959222702.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

RamaMenuGeneral9959222702::RamaMenuGeneral9959222702()
{
    //ctor
}

RamaMenuGeneral9959222702::~RamaMenuGeneral9959222702()
{
    //dtor
}

void RamaMenuGeneral9959222702::menuPrincipal()
{
    fstream file2;
    RamaAutenticador9959222702 ingreso;

    // Obtiene el tiempo actual
    time_t tiempoActual = time(0);

    // Convierte el tiempo actual a una estructura tm local
    tm* fechaHoraLocal = localtime(&tiempoActual);

    file2.open("Bitacora.txt", ios::app | ios::out);

    int choice;
	char x;
	do
    {
	system("cls");
	string usuarioAutenticado = ingreso.getUsuarioAutenticado();
    cout << "Usuario Autenticado: " <<usuarioAutenticado<< "\n"<< endl; // Mostrar el nombre de usuario autenticado
    cout <<"\t\t\t--------------------------------"<<endl;
    cout <<"\t\t\t| BIENVENIDO AL MENU PRINCIPAL |"<<endl;
    cout <<"\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Procesos"<<endl;
	cout<<"\t\t\t 3. Informes"<<endl;
	cout<<"\t\t\t 4. Salida"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;
    switch(choice){
    case 1:
        system("cls");
        cout << "Usuario Autenticado: " <<usuarioAutenticado<< "\n"<< endl; // Mostrar el nombre de usuario autenticado
        //menuCatalogos();
        break;
    case 2:
        system("cls");
        cout << "Usuario Autenticado: " <<usuarioAutenticado<< "\n"<< endl; // Mostrar el nombre de usuario autenticado
        //menuProcesos();
        break;
    case 3:
        system("cls");
        cout << "Usuario Autenticado: " <<usuarioAutenticado<< "\n"<< endl; // Mostrar el nombre de usuario autenticado
        //menuInformes();
        break;
    case 4:
	    file2 << "\t\t\tHora en que salio del programa: " << fechaHoraLocal->tm_hour << ":" << fechaHoraLocal->tm_min << ":" << fechaHoraLocal->tm_sec <<"\n" << endl;
        exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;
    }

	getch();
    }while(choice!= 3);
    file2.close();
}
