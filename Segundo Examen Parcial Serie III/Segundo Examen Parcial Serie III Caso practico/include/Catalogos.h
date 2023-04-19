#ifndef CATALOGOS_H
#define CATALOGOS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Catalogos     // Se define la clase Catalogos
{
    public:
        Catalogos(int idReservacion, string idcliente, int habitacion, int cantidadHabitaciones, string fechaInicio, string fechaFin);

        void menu();// Se define el método menu, que muestra el menú de opciones para los Catalogos

        // Funciones de la clase para establecer y obtener los valores de los atributos privados:
        int setIdReservacion(int idReservacion); // Establece el valor del atributo privado 'idReservacion' de la clase
        int getIdReservacion(); // Obtiene el valor del atributo privado 'idReservacion' de la clase

        string setCliente (string idcliente); // Establece el valor del atributo privado 'idcliente' de la clase
        string getCliente(); // Obtiene el valor del atributo privado 'idcliente' de la clase

        int setHabitacion (int habitacion); // Establece el valor del atributo privado 'habitacion' de la clase
        int getHabitacion(); // Obtiene el valor del atributo privado 'habitacion' de la clase

        int setCantidadHabitaciones (int cantidadHabitaciones); // Establece el valor del atributo privado 'cantidadHabitaciones' de la clase
        int getCantidadHabitaciones(); // Obtiene el valor del atributo privado 'cantidadHabitaciones' de la clase

        string setFechaInicio (string fechaInicio); // Establece el valor del atributo privado 'fechaInicio' de la clase
        string getFechaInicio(); // Obtiene el valor del atributo privado 'fechaInicio' de la clase

        string setFechaFin (string fechaFin); // Establece el valor del atributo privado 'fechaFin' de la clase
        string getFechaFin(); // Obtiene el valor del atributo privado 'fechaFin' de la clase

        bool estadoReservacion();// Se define el método estadoReservacion, que verifica si la reservacion es valida

    protected:

    private:
        int idReservacion;
        string idcliente;
        int habitacion, cantidadHabitaciones;
        string fechaInicio, fechaFin;

};

#endif // CATALOGOS_H
