// Main.cpp
#include <iostream>
#include "Source/Calcu.h"
using namespace std;

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        mostrarMenu();
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado =   restar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado =   multiplicar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                if (num2 != 0) {
                    resultado =   dividir(num1, num2);
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero." << endl;
                }
                break;
            case 5:
                cout << "Gracias por usar mi programa" << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
                break;
        }

    } while (opcion != 5);

    return 0;
}
