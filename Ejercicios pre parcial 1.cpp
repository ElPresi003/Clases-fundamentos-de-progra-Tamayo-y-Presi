#include <iostream>
#include <sstream>

using namespace std;

int main () {
    int distancia;
    do {
    cout << "Bienvenido a envíos express" << endl;
    cout << "Por favor ingrese la distancia de su envio en KM" << endl;
    cout << "El envio es de: " << endl;
    cin >> distancia;

    if (distancia <= 10){
        cout << "Se te cobaran 3 dolares" << endl;
    }
    else if (distancia > 10 && distancia <= 30){
        cout << "Se te cobaran 7 dolares" << endl;
    }
    else if (distancia > 10 && distancia > 30){
        cout << "Se te cobaran 12 dolares" << endl;
    }
    else { cout << "Has ingresado una distancia no valida por favor intenta de nuevo" << endl;}
} while (distancia < 0);

return 0;

}