// Calcu.cpp
#include "Source/Calcu.h"
#include <iostream>
using namespace std;

float sumar(float a, float b) {
    return a + b;
}

float  restar(float a, float b) {
    return a - b;
}

float  multiplicar(float a, float b) {
    return a * b;
}

float  dividir(float a, float b) {
    return a / b;
}

void  mostrarMenu() {
    cout << "\n=== CALCULADORA BASICA ===\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";
}
