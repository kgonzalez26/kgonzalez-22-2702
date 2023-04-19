#ifndef CATALOGOS_H
#define CATALOGOS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Catalogos
{
    public:
        Catalogos(int idReservacion, string cliente, int habitacion, int cantidadHabitaciones, string fechaInicio, string fechaFin, bool estadoReservacion);

        bool estadoReservacion();

    protected:

    private:
        int idReservacion;
        string cliente;
        int habitacion, cantidadHabitaciones;
        string fechaInicio, fechaFin;

};

#endif // CATALOGOS_H
