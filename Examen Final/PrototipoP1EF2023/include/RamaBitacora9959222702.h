#ifndef RAMABITACORA9959222702_H
#define RAMABITACORA9959222702_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class RamaBitacora9959222702
{
    public:
        RamaBitacora9959222702();
        virtual ~RamaBitacora9959222702();

        string setAccion(string accion);
        string getAccion();
        string setAplicacion(string aplicacion);
        string getAplicacion();

        void desplegarBitacora();
        void insertarAccion(string aplicacion, string accion);

    protected:

    private:

        string accion, aplicacion;
};

#endif // RAMABITACORA9959222702_H
