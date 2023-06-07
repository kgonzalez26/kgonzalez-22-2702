#include "RamaProcesosAsignacionEstudiantes9959222702.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

RamaProcesosAsignacionEstudiantes9959222702::RamaProcesosAsignacionEstudiantes9959222702()
{
    //ctor
}

RamaProcesosAsignacionEstudiantes9959222702::~RamaProcesosAsignacionEstudiantes9959222702()
{
    //dtor
}

void RamaProcesosAsignacionEstudiantes9959222702::menuAsignacionCursos()
{
    system("cls");
    fstream file,file1;
    int found=0;
    int participant_id;
    cout<<"\n-------------------------Agregar Procesos Alumno-------------------------"<<endl;
    file1.open("Record1.txt", ios::in);
    if(!file1) {
        cout<<"\n\t\t\tNo hay informacion..,";
        file1.close();
    } else {
        cout<<"\n Ingrese Id del empleado que desea actualizar: ";
        cin>>participant_id;
        file.open("ParticipantRecord1.txt", ios::app | ios::out);
        file1 >> id >>nombre >>apellido >>genero >>facultad >>ciclo >>curso >>seccion ;
        while(!file1.eof())
        {
			if(participant_id=id)
			{
                bool salir = false;
                int choice;

                fstream file2;
                file2.open("Bitacora.txt", ios::app | ios::out);

                int accion0 = 7001;
                int accion1 = 7002;
                int accion2 = 7003;
                int accion3 = 7004;
                int accion4 = 7005;

                found++;

                do
                {
                    system("cls");
                    cout <<"\t\t\t-------------------------------------------------------"<<endl;
                    cout <<"\t\t\t| MENU DE INGRESO DE PROCESOS DE AGISNACION DE CURSOS |"<<endl;
                    cout <<"\t\t\t|                       ALUMNOS                       |"<<endl;
                    cout <<"\t\t\t-------------------------------------------------------"<<endl;
                    cout<<"\t\t\t 1. Ingreso de Facultad del Alumno"<<endl;
                    cout<<"\t\t\t 2. Ingreso de Ciclo    del Alumno"<<endl;
                    cout<<"\t\t\t 3. Ingreso de Curso    del Alumno"<<endl;
                    cout<<"\t\t\t 4. Ingreso de Seccion  del Alumno"<<endl;
                    cout<<"\t\t\t 5. Agregar los Datos del Alumno"<<endl;
                    cout<<"\t\t\t 6. Exit"<<endl;

                    cout<<"\t\t\t-------------------------------"<<endl;
                    cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
                    cout<<"\t\t\t-------------------------------"<<endl;
                    cout<<"Ingresa tu Opcion: ";
                    cin>>choice;

                    switch(choice)
                    {
                    case 1:
                        insertarFacultad();
                        file2<<"\t\t\tAccion: Ingreso de Facultad del Alumno - " <<accion1<<"\n"<<endl;
                        break;
                    case 2:
                        insertarCiclo();
                        file2<<"\t\t\tAccion: Ingreso de Ciclo del Alumno - " <<accion2<<"\n"<<endl;
                        break;
                    case 3:
                        insertarCurso();
                        file2<<"\t\t\tAccion: Ingreso de Curso del Alumno - " <<accion3<<"\n"<<endl;
                        break;
                    case 4:
                        insertarSeccion();
                        file2<<"\t\t\tAccion: Ingreso de Seccion del Alumno - " <<accion4<<"\n"<<endl;
                        break;
                    case 5:
                        insertar2();
                        file2<<"\t\t\tAccion: Agregar los Datos del Alumno - " <<accion4<<"\n"<<endl;
                        break;
                    case 6:
                        salir = true;
                    default:
                        cout<<"\t\t\t\nSaliendo del menu";
                    }
                    getch();
                }while(choice!= 6);
                file2.close();
                break;
            }
        }
        if(found==0)
		{
			cout << "No se encontró ningún registro con esa ID." << endl;
		}
		file.close();
    }
}

void RamaProcesosAsignacionEstudiantes9959222702::insertarFacultad()
{
	system("cls");
    string facultad;
	cout<<"\n----------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar Facultad Alumno ---------------------------------------------"<<endl;
    cout << "\t\t\Facultad: ";//Solicita al usuario que ingrese la Facultad del alumno
    cin >> facultad;
    cout<<"\t\t\t\nSE INGRESO CORRECTAMENTE!!!";
}
void RamaProcesosAsignacionEstudiantes9959222702::insertarCiclo()
{
	system("cls");
	string ciclo;
	cout<<"\n----------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar Ciclo Alumno ---------------------------------------------"<<endl;
    cout << "\t\t\Ciclo: ";//Solicita al usuario que ingrese la Ciclo del alumno
    cin >> ciclo;
    cout<<"\t\t\t\nSE INGRESO CORRECTAMENTE!!!";
}
void RamaProcesosAsignacionEstudiantes9959222702::insertarCurso()
{
	system("cls");
	string curso;
	cout<<"\n----------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar Curso Alumno ---------------------------------------------"<<endl;
    cout << "\t\t\Curso: ";//Solicita al usuario que ingrese la Curso del alumno
    cin >> curso;
    cout<<"\t\t\t\nSE INGRESO CORRECTAMENTE!!!";
}
void RamaProcesosAsignacionEstudiantes9959222702::insertarSeccion()
{
	system("cls");
	string seccion;
	cout<<"\n----------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar seccion Alumno ---------------------------------------------"<<endl;
    cout << "\t\t\Seccion: ";//Solicita al usuario que ingrese la seccion del alumno
    cin >> seccion;
    cout<<"\t\t\t\nSE INGRESO CORRECTAMENTE!!!";
}
void RamaProcesosAsignacionEstudiantes9959222702::insertar2()
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


        //Abre el archivo "ParticipantRecord1.txt" para guardar como archivo de acceso aleatorio
        file.open("ParticipantRecord1.txt", ios::app | ios::out);
        file<<std::left<<std::setw(10)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< genero
            <<std::left<<std::setw(15)<< facultad <<std::left<<std::setw(15)<< ciclo <<std::left<<std::setw(15)<< curso <<std::left<<std::setw(15)<< seccion << "\n";

        file.close();

         cout << "Alumno guardado exitosamente" << endl;

    }
}

