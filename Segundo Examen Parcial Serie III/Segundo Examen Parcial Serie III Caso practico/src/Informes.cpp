#include "Informes.h"

Informes::Informes()
{
    //ctor
}

void menuInforme()
{
    bool salir = false;
    int opcion;
	do
    {
	system("cls");

    cout <<"\t\t\t----------------------------------"<<endl;
    cout <<"\t\t\t|         MENU CATALOGOS         |"<<endl;
    cout <<"\t\t\t----------------------------------"<<endl;
	cout<<"\t\t\t 1. Buscar"<<endl;
	cout<<"\t\t\t 2. Consultar"<<endl;
    cout<<"\t\t\t 3. Salir"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:

        break;
    case 2:
        imprimirInforme();
        break;
    case 3:
        salir = true;
        break;
    }
    }while(opcion!= 3);
}

void imprimirInforme()
{
    int idPersona;
    system("cls");
    fstream file;//Se declara una variable "file" de tipo fstream para abrir el archivo.
    string line;//Se declara una variable "line" de tipo string para almacenar las líneas leídas del archivo.
    cout<<"\n------------------------- Informes de clientes -------------------------"<<endl;
    cout<<"\nIngrese Id de la Persona que quiere buscar: ";
    cin>>idPersona;
    /*file >> idReservacion;
    file.open("Informes.txt", ios::in);//Se abre el archivo en modo lectura "ios::in" y se verifica si se pudo abrir correctamente.
    if (file.is_open()) {
        if(participant_id==id)
			{
            cout <<"Id Persona: "<<id<<endl;

			}
        file.close();//Se cierra el archivo "file.close();".
    } else {
        cout << "No se pudo abrir el archivo" << endl;
    }*/
}

