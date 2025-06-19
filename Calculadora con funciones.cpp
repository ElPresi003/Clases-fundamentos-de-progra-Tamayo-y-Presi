#include <iostream>
using namespace std;



int main() {
    //declaración de variables
    int opcion;
    float num1, num2, resultado;

    do {
        // Menú a mostrar al usuario
        cout << "\n=== CALCULADORA BASICA ===\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        //Ingreso de números para las operaciones
        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
        }
        //Estructura de selección condicional para las operaciones
        switch (opcion) {
            case 1:
                resultado = num1 + num2;    //operación suma
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado = num1 - num2;    //operación resta
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = num1 * num2;    //operación multiplicación
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                if (num2 != 0) {            //validación de num2 diferente de cero
                    resultado = num1 / num2;//operación división
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
