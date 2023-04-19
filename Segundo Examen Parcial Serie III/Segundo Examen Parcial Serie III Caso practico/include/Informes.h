#ifndef INFORMES_H
#define INFORMES_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Informes
{
    public:
        Informes();

        void imprimirInforme();

        void menuInforme();

    protected:

    private:
        int idReservacion;

};

#endif // INFORMES_H
