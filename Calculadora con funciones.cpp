#include <iostream>
using namespace std;

// Declaración de funciones
float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
void mostrarMenu();

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        mostrarMenu(); // Llamada a función que muestra el menú
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
                resultado = restar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                if (num2 != 0) {
                    resultado = dividir(num1, num2);
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
        }

    } while (opcion != 5);

    return 0;
}

// Definiciones de funciones
float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

void mostrarMenu() {
    cout << "\n=== CALCULADORA BASICA ===\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";
}
