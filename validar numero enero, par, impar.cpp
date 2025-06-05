#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;

int main () {
    int numero;
    
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "Numero par" << endl;
    }

    else {cout << "Numero impar" << endl;}
    return 0;
}