#include <iostream>
#include <vector>

using namespace std;

// Estructura para almacenar datos de un estudiante
struct Estudiante {
    string nombre;
    string apellido;
    string carnet;
    vector<float> notas;
    float promedio;

    // Constructor para inicializar el vector de notas
    Estudiante() {
        notas.resize(9);
        promedio = 0.0;
    }
};

int main() {
    int cantidad, continuar;

    do {
        cout << "Ingrese la cantidad de estudiantes: ";
        cin >> cantidad;
        cin.ignore(); // Limpiar buffer

        vector<Estudiante> estudiantes(cantidad); // Crear vector de estudiantes

        for (int i = 0; i < cantidad; i++) {
            cout << "\n--- Estudiante #" << (i + 1) << " ---\n";

            // Ingreso de datos personales
            cout << "Ingrese su nombre: ";
            getline(cin, estudiantes[i].nombre);

            cout << "Ingrese su apellido: ";
            getline(cin, estudiantes[i].apellido);

            // Validación del carnet
            do {
                cout << "Ingrese su carnet (8 caracteres): ";
                getline(cin, estudiantes[i].carnet);

                if (estudiantes[i].carnet.length() != 8) {
                    cout << "Carnet inválido. Debe tener exactamente 8 caracteres.\n";
                }
            } while (estudiantes[i].carnet.length() != 8);

            // Captura de notas
            float suma = 0.0;
            for (int j = 0; j < 9; j++) {
                float nota;
                do {
                    cout << "Ingrese la nota " << (j + 1) << " (0.0 a 10.0): ";
                    cin >> nota;

                    if (nota < 0.0 || nota > 10.0) {
                        cout << "Nota fuera de rango. Intente nuevamente.\n";
                    } else {
                        estudiantes[i].notas[j] = nota;
                        suma += nota;
                    }
                } while (nota < 0.0 || nota > 10.0);
            }

            estudiantes[i].promedio = suma / estudiantes[i].notas.size();
            cin.ignore(); // Limpiar salto de línea después de las notas
        }

        // Mostrar resultados
        for (int i = 0; i < cantidad; i++) {
            cout << "\n--- RESULTADO Estudiante #" << (i + 1) << " ---\n";
            cout << "Nombre completo: " << estudiantes[i].nombre << " " << estudiantes[i].apellido << endl;
            cout << "Carnet: " << estudiantes[i].carnet << endl;
            cout << "Promedio de notas: " << estudiantes[i].promedio << endl;
        }

        cout << "\n¿Desea ingresar otro grupo de estudiantes?\n";
        cout << "Para salir presione 1, para continuar presione otro número: ";
        cin >> continuar;
        cin.ignore();
        cout << endl;

    } while (continuar != 1);

    return 0;
}
