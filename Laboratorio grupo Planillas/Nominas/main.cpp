#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <vector>
#include "datos.h"

using namespace std;

int main()
{
    // Definici�n de vectores para almacenar los usuarios y contrase�as v�lidos
    vector<string> usuarios; // Vector que almacena los nombres de usuario v�lidos
    vector<string> contrasenas; // Vector que almacena las contrase�as correspondientes

    // Agregando usuarios y contrase�as al vector
    usuarios.push_back("Giovanni");
    usuarios.push_back("Favio");
    usuarios.push_back("Kevin");
    usuarios.push_back("Daniel");

    contrasenas.push_back("147");
    contrasenas.push_back("258");
    contrasenas.push_back("369");
    contrasenas.push_back("753");

    // Definici�n de variables para ingreso de usuario y contrase�a
    string usuario, contrasena;

    // Definici�n de contador y bandera para control de ingreso
    int contador = 0; // Contador para intentos de ingreso
    bool ingresa = false;  // Bandera para indicar si el usuario ha ingresado correctamente o no.

    // Inicia el ciclo do-while para el inicio de sesi�n
    do{
        // Limpia la pantalla y muestra un encabezado
        system("cls");
        cout <<"\t\t\t---------------------"<<endl;
        cout <<"\t\t\t| LONGIN DE USUARIO |"<<endl;
        cout <<"\t\t\t---------------------"<<endl;
        // Muestra un mensaje de advertencia sobre el n�mero de intentos permitidos
        cout <<"\n\t  Advertencia: Solo tienes permetido 3 intetos!!!"<<endl;
        cout <<"\t---------------------------------------------------"<<endl;
        // Solicita el nombre de usuario y contrase�a del usuario
        cout <<"\n\tIngrese su usuario: ";
        cin >> usuario;
        cout <<"\n\tIngrese su password: ";
        // Oculta el ingreso de la contrase�a con asteriscos
        char caracter;
        caracter = getch();

        contrasena = "";

        while (caracter != 13){
                if(caracter != 8)
                {
                    contrasena.push_back(caracter);
                    cout<< "*";
                }else{
                    if(contrasena.length()>0)
                    {
                        cout<<"\b \b";
                        contrasena = contrasena.substr(0, contrasena.length() - 1);
                    }
                }

            caracter = getch();
        }

        // Compara el usuario y la contrase�a ingresados con los almacenados en los vectores
        for(int i = 0; i < usuarios.size(); i++)
        {
            if(usuarios[i] == usuario && contrasenas[i] == contrasena){
                ingresa = true;
            }
        }

        // Si el usuario no es v�lido, muestra un mensaje de error y aumenta el contador de intentos
        if(!ingresa){
            cout << "\n"<<endl;
                cout << "\n\tUSUARIO Y/O PASSWORD INCORRECTOS"<<endl;
                cout << "\n\tPerdio un intento, Intente de nuevo"<<endl;
                cout << "\n"<<endl;
                contador++;
                system("pause");
        }
    }while(ingresa == false && contador < 3); // El ciclo se repite mientras el usuario no haya iniciado sesi�n y el n�mero de intentos sea menor que tres.

    if(ingresa == false)
    {
        // Si el usuario no ha podido ingresar, muestra un mensaje de error.
        system("cls");
        cout << "\n\tPERDIO LOS 3 INTENTOS"<<endl;
        cout << "\n\tNO PODRA INGRESAR MAS INTENTOS"<<endl;
    }else
    {
        // Si el usuario ha podido ingresar, se crean y se inicializan algunas variables necesarias para el c�lculo de la n�mina.
        system("cls");
        string nombre, apellido, genero;
        int id;
        int dia, mes, dpi, telefono, telefono1 , numCuenta;
        float sueldo;
        float bonificacionIncentiva = 250;
        float comisiones;
        float percepciones_extra;
        float horas_extra;
        float total_percepciones;
        float isr;
        float iggs;
        float irtra = 75;
        float prestamos;
        float deducciones_totales;
        float sueldo_liquido;

        // Se crea un objeto de la clase "datos" llamado "estudiante".

        datos estudiante(id, nombre, apellido,genero, dia, mes, dpi, telefono, telefono1, numCuenta, sueldo, comisiones, percepciones_extra, horas_extra, isr);

        // Se llama al m�todo "menu" de ese objeto para mostrar el men� principal del programa.
        estudiante.menu();
    }


    // El programa termina y devuelve 0.
    return 0;
}

