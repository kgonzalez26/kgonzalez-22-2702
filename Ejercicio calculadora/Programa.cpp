#include <iostream>

using namespace std;

int main()
{
    float num1, num2, resul;
    char choice;
    cout<<"Seleccione la operación que desea realizar\n";
    cout<<"1. Suma\n";
    cout<<"2. Resta\n";
    cout<<"3. Multiplicación\n";
    cout<<"4. División\n";
    cout<<"Respuesta:";
    cin>>choice;
    
    if(choice=='1')
    {
        cout<<"Introduzca el primer valor:";
        cin>>num1;
        cout<<"Introduzca el segundo valor:";
        cin>>num2;
        resul=num1+num2;
        cout<<resul;
    }
    
    if(choice=='2')
    {
        cout<<"Introduzca el primer valor:";
        cin>>num1;
        cout<<"Introduzca el segundo valor:";
        cin>>num2;
        resul=num1-num2;
        cout<<resul;
    }
    
    if(choice=='3')
    {
        cout<<"Introduzca el primer valor:";
        cin>>num1;
        cout<<"Introduzca el segundo valor:";
        cin>>num2;
        resul=num1*num2;
        cout<<resul;
    }
    
    if(choice=='4')
    {
        cout<<"Introduzca el primer valor:";
        cin>>num1;
        cout<<"Introduzca el segundo valor:";
        cin>>num2;
        resul=num1/num2;
        cout<<resul;
    }
    
    return 0;
}