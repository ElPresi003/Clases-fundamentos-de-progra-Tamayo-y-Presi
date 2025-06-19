#include <iostream>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int main () {
    float temperatura [8], suma = 0;
    char nombre[50];
    int operacion;
    cout << "Bienvenido a su calculador de temperaturas" << endl;
    cout << "Por favor ingrese su nombre completo" << endl;
    cin.getline(nombre, 50);
    cout << "Bienvenido " << nombre << endl;
    cout << "Por favor ingresa las 8 temperaturas que se solicitan a continuacion " << endl;

    for (int i = 0; i<8; i++) {
        cout << "Ingrese la temperatura " << i+1 << ": " << endl;
        cin >> temperatura[i];
        suma += temperatura[i];
    }


    cout << "Muchas gracias, ahora seleccione que desea hacer: " << endl;
    do {
    cout << "Escriba 1 para Calcular promedio" << endl;
    cout << "Escriba 2 para Mostrar temperatura mayor y su posición" << endl;
    cout << "Escriba 3 para Contar cuántas son mayores a 30°C" << endl;
    cout << "Escriba 4 para Imprimir temperaturas en orden inverso" << endl;
    cout << "Escriba 5 para Salir" << endl;
    cin >> operacion;

    switch (operacion) {
        case 1: {
            float promedio;
            promedio = suma/8;
        cout << "El promedio de temperaturas ingresadas es: " << promedio << endl;

    }

    break;

    case 2: {
        float mayor = temperatura[0];
        int indice = 0;
        for (int i = 0; i<8; i++) {
            if (mayor < temperatura[i]) {
                mayor = temperatura[i];
                indice = i;
            }
        }
    cout << "La temperatura mayor es: " << mayor << endl;
    cout << "Y se encuentra en la posicion" << indice << endl;
    }

    break;

    case 3: {
        int mayores = 0;
        for (int i = 0; i<8; i++) {
            if (temperatura[i] > 30) {
                mayores += 1;
            }
        }
        cout << "La cantidad de mayores a 30°C son: " << mayores << endl;
}

break;

case 4:
cout << "Las temperaturas en orden inverso son: " << endl;
for (int i = 7; i >= 0; i--) {
    cout << temperatura[i] << endl;;
}

break;

case 5: 
cout << "Has elegido salir, gracias por usar. " << endl;
return 0;

break;

default: cout << "Has elegido una opcion invalida, por favor intenta de nuevo" << endl;
    }
} while (operacion != 5);
}