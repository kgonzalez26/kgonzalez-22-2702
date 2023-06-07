#ifndef RAMAPROCESOSASIGNACIONESTUDIANTES9959222702_H
#define RAMAPROCESOSASIGNACIONESTUDIANTES9959222702_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class RamaProcesosAsignacionEstudiantes9959222702
{
    public:
        RamaProcesosAsignacionEstudiantes9959222702();
        virtual ~RamaProcesosAsignacionEstudiantes9959222702();

        void menuAsignacionCursos();

        void insertarFacultad();
        void insertarCiclo();
        void insertarCurso();
        void insertarSeccion();

        void insertar2();

    protected:

    private:

        string nombre, apellido, genero; // 'nombre', 'apellido' y 'genero' son variables tipo 'string' que almacenan los datos personales del alumno.
        int id; // 'id' es una variable tipo 'int' que almacena el ID del alumno.
        string facultad, ciclo, curso, seccion;

};

#endif // RAMAPROCESOSASIGNACIONESTUDIANTES9959222702_H
