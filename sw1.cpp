#include <iostream>
#include <string>
using namespace std;

int main(){

    int day;
    string nameday;
    cout << "Ingrese un numero del 1 al 7 para imprimir el dia de la semana:\n";
    cin >> day;

    switch (day)
    {
    case 1:
        nameday = "Domingo";
        break;
    case 2:
        nameday = "Lunes";
        break;
    case 3:
        nameday = "martes";
        break;
    case 4:
        nameday = "miercoles";
        break;
    case 5:
        nameday = "jueves";
        break;
    case 6:
        nameday = "viernes";
        break;
    case 7:
        nameday = "sabado";
        break;

    default:
        cout << "Numero no valido";
        break;
    }

    cout << "Tu dia de la semana es: " << nameday << endl;

    return 0;
}

/*Pide un número del 1 al 7 e imprime el día de la semana correspondiente 
(1 = Lunes, 2 = Martes, etc.).*/