#include "Catalogos.h"

Catalogos::Catalogos(int idReservacion, string idcliente, int habitacion, int cantidadHabitaciones, string fechaInicio, string fechaFin)
{
    //ctor
    this->idReservacion=idReservacion; // Se asigna el valor del parámetro usuario al atributo usuario de la clase
    this->idcliente=idcliente;
    this->habitacion=habitacion;
    this->cantidadHabitaciones=cantidadHabitaciones;
    this->fechaInicio=fechaInicio;
    this->fechaFin=fechaFin;

}

// set y get para idReservacion
int Catalogos::setIdReservacion(int idReservacion) {
    this->idReservacion = idReservacion;
}
int Catalogos::getIdReservacion() {
    return this->idReservacion;
}

// set y get para idcliente
string Catalogos::setCliente(string idcliente) {
    this->idcliente = idcliente;
}
string Catalogos::getCliente() {
    return this->idcliente;
}

// set y get para habitacion
int Catalogos::setHabitacion(int habitacion) {
    this->habitacion = habitacion;
}
int Catalogos::getHabitacion() {
    return this->habitacion;
}

// set y get para cantidadHabitaciones
int Catalogos::setCantidadHabitaciones(int cantidadHabitaciones) {
    this->cantidadHabitaciones = cantidadHabitaciones;
}
int Catalogos::getCantidadHabitaciones() {
    return this->cantidadHabitaciones;
}

// set y get para fechaInicio
string Catalogos::setFechaInicio(string fechaInicio) {
    this->fechaInicio = fechaInicio;
}
string Catalogos::getFechaInicio() {
    return this->fechaInicio;
}

// set y get para fechaFin
string Catalogos::setFechaFin(string fechaFin) {
    this->fechaFin = fechaFin;
}
string Catalogos::getFechaFin() {
    return this->fechaFin;
}


void Catalogos::menu()
{
    bool salir = false;
    int opcion;
	do
    {
	system("cls");

    cout <<"\t\t\t----------------------------------"<<endl;
    cout <<"\t\t\t|         MENU CATALOGOS         |"<<endl;
    cout <<"\t\t\t----------------------------------"<<endl;
	cout<<"\t\t\t 1. Altas"<<endl;
	cout<<"\t\t\t 2. Bajas"<<endl;
	cout<<"\t\t\t 3. Modificar"<<endl;
	cout<<"\t\t\t 4. Consultar reservacion"<<endl;
    cout<<"\t\t\t 5. Salir"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    case 5:
        salir = true;
        break;
    }
    }while(opcion!= 5);
}

bool estadoReservacion()
{

}
