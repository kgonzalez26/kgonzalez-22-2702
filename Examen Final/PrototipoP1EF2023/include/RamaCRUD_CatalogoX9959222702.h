#ifndef RAMACRUD_CATALOGOX9959222702_H
#define RAMACRUD_CATALOGOX9959222702_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class RamaCRUD_CatalogoX9959222702
{
    public:
        RamaCRUD_CatalogoX9959222702();
        virtual ~RamaCRUD_CatalogoX9959222702();

        void menuCatalogos();

        void menuRegistroAlumnos();
        void menuRegistroMaestros();

        void IngresarDatosAlumno();

        void insertar1();

    protected:

    private:

        string nombre, apellido, genero; // 'nombre', 'apellido' y 'genero' son variables tipo 'string' que almacenan los datos personales del alumno.
        int id; // 'id' es una variable tipo 'int' que almacena el ID del alumno.
        string facultad, ciclo, curso, seccion;
};

#endif // RAMACRUD_CATALOGOX9959222702_H
