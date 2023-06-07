//Desarrollador: Kevin Eduardo González Sosa
//Carnet: 9959-22-2702
//Examen Final Programacion I

#include "RamaAutenticador9959222702.h"
#include "RamaMenuGeneral9959222702.h"

#include <iostream>
#include <fstream>

using namespace std;

string usuario, contrasena;
RamaAutenticador9959222702 ingreso;

int main()
{
    bool usuarioCorrecto = ingreso.verificarUsuario();

    if (usuarioCorrecto)
    {
        RamaMenuGeneral9959222702 inicio;
        inicio.menuPrincipal();
    }
    return 0;
}

