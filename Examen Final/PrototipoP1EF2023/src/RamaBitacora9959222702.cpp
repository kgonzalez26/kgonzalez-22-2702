#include "RamaBitacora9959222702.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

RamaBitacora9959222702::RamaBitacora9959222702()
{
    //ctor
}

RamaBitacora9959222702::~RamaBitacora9959222702()
{
    //dtor
}

string RamaBitacora9959222702::setAccion(string accion) {
    this->accion = accion;
}

string RamaBitacora9959222702::getAccion() {
    return this->accion;
}

string RamaBitacora9959222702::setAplicacion(string aplicacion) {
    this->aplicacion = aplicacion;
}

string RamaBitacora9959222702::getAplicacion() {
    return this->aplicacion;
}

void RamaBitacora9959222702::desplegarBitacora()
{
    fstream file2;
    int accion11 = 7021;
    file2.open("Bitacora.txt", ios::app | ios::out);
    file2<<"\t\t\tAccion: Consulto Bitacora - " <<accion11<<"\n"<<endl;
    file2.close();


    system("cls");
    fstream file;//Se declara una variable "file" de tipo fstream para abrir el archivo.
    string line;//Se declara una variable "line" de tipo string para almacenar las líneas leídas del archivo.
    file.open("Bitacora.txt", ios::in);//Se abre el archivo en modo lectura "ios::in" y se verifica si se pudo abrir correctamente.
    if (file.is_open()) {
        while (getline(file, line)) {//Se usa un ciclo while para leer todas las líneas del archivo "ParticipantRecord1.txt" y mostrarlas en la consola con "cout << line << endl;".
            cout << line << endl;
        }
        file.close();//Se cierra el archivo "file.close();".
    } else {
        cout << "No se pudo abrir el archivo" << endl;
    }
    insertarAccion("7021", "Despliege de Bitacora");
}
void RamaBitacora9959222702::insertarAccion(string aplicacion, string accion)
{
    fstream file2;
    file2.open("Bitacora.txt", ios::app | ios::out);
    file2<<"\t\t\tAplicacion: "<<aplicacion<<", Accion:" <<accion<<"\n"<<endl;
	file2.close();
}
