#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;

int main () {
    float celsius [8], farenteheit [8];

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la temperatura" << i+1 << ": " << endl;
        cin >> celsius[i];
    } 
    
    for (int i; i < 8; i++) {
        cout << celsius[i] << endl;;
    }

    return 0;
}