#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    struct
    {
        string nombre;
        char inicial;
        int edad;
        float nota;
    } persona;

    datosPersona *persona = new datosPersona[5];

    for (int i=0; i<5; i++)
    {
        cout << "Ingresa el nombre de la persona: " << i << endl;
        cin >> persona[i].nombre;
        cout << "Que nota tiene la persona: " << i << endl;
        cin >> persona[i].nota;
    }

    //persona.nombre = "Alberto";
    //persona.inicial = 'A';
    //persona.edad = 25;
    //persona.nota = 8;
    //cout << "El nombre es: " << persona.nombre;
    //cout << "la edad es: " << persona.edad;


    return 0;
}
