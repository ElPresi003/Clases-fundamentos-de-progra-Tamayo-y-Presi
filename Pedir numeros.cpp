#include <iostream>
#include <sstream>

using namespace std;

int main () {
    int numero = -1;

    while (numero < 0 || numero > 100) {
        cout << "Por favor ingrese un numero entre 1 y 100" << endl;
        cin >> numero;
    }

    return 0;
}