#include <iostream>
#include <fstream>
#include <string>
#include "Usuarios.h"
#include "Catalogos.h"

using namespace std;

int main() {

    string usuario, contrasena;
    Usuarios ingreso(usuario, contrasena);
    bool usuarioCorrecto = ingreso.verificarUsuario();

    //string
    int idReservacion;
    string idcliente;
    int habitacion, cantidadHabitaciones;
    string fechaInicio, fechaFin;
    Catalogos reservacion(int idReservacion, string idcliente, int habitacion, int cantidadHabitaciones, string fechaInicio, string fechaFin);

    //if (usuarioCorrecto) {
    int opcion;
	char x;
	do
    {
	system("cls");

    cout <<"\t\t\t----------------------------------"<<endl;
    cout <<"\t\t\t |BIENVENIDO AL MENU PRINCIPAL|"<<endl;
    cout <<"\t\t\t----------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Al Menu de Usurios"<<endl;
	cout<<"\t\t\t 2. Ingreso Al Menu de Catalogos"<<endl;
	cout<<"\t\t\t 3. Ingreso Al Menu de Informes"<<endl;
	cout<<"\t\t\t 4. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;
    switch(opcion){
    case 1:
        ingreso.menuUsuarios();
        break;
    case 2:
        //catalogos.menu();
        break;
    case 3:
        //informe.menu();
        break;
    case 4:
        exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;
    }


    }while(opcion!= 4);
}
