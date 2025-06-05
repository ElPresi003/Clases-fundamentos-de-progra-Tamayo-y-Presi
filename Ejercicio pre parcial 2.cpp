#include <iostream>
#include <sstream>

using namespace std;

int main () {
    float monto, preciof, descuento;
    int rango;
    cout << "Bienvenido, por favor ingresa el rango de tu monto de compra" << endl;
    cout << "Ingresa 1 si tu rango esta por debajo de los 50 dolares" << endl;
    cout << "Ingresa 2 si tu rango esta entre 50 y 100 dolares" << endl;
    cout << "Ingresa 3 si tu rango esta arriba de 100 dolares" << endl;
    cin >> rango;

    do {
    switch (rango) {
        case 1: 
        cout << "Por tu monto no cuentas con un descuento disponile" << endl;
        cout << "Gracias por preferirnos" << endl;
        return 0;

        break;

        case 2: 
        cout << "Ingresa tu monto inicial" << endl;
        cin >> monto;
        cout << "Cuentas con un descuento del 10%" << endl;
        descuento = monto * 0.10;
        preciof = monto - descuento;
        cout << "Tu precio final es de : " << preciof<< endl;

        break;

        case 3: 
        cout << "Ingresa tu monto inicial" << endl;
        cin >> monto;
        cout << "Cuentas con un descuento del 20%" << endl;
        descuento = monto * 0.20;
        preciof = monto - descuento;
        cout << "Tu precio final es de : " << preciof<< endl;

        break;
    }

    } while (rango <0 && rango >4);
}