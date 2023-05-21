#include <iostream>
using namespace std;

// funcion para retiro
void funcion1(int dato1, int dato2)
{
 int resultado=dato1-dato2;
}

// funcion para deposito
int main(int argc, char const *argv[])
{
    int pin=1234, opcion, dato1=1000, dato2;

    cout << "Ingrese su pin para iniciar sesion: " << endl;
    cin >> pin; 

    if (pin==1234)
    {
        cout << "* A T M *" << endl;
        cout << "Opcion 1: retiro" <<endl;
        cout << "Opcion 2: deposito" << endl;
        cout << "Opcion 3: cancelar " << endl;
        cin >> opcion;
    } 
    else
    {
        cout << "El pin que usted ha igresado es incorrecto.";
    }
    
switch (opcion)
{
case 1:
    cout << "ingrese la cantidad que desea retirar: " << endl;
    cin >> dato2;
    funcion1 (dato1,dato2);
    cout << "Su monto restante es: " << funcion1;
    
    break;

default:
    cout << "Debe ingresar una opcion";
    break;
}

    return 0;
}
