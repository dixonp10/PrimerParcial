#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa el numero a comparar: ";
    cin >> numero;

    if (numero > 0 && numero < 100) {
        cout << "El numero es valido." << endl;
    } else {
        cout << "El numero no cumple" << endl;
    }

    return 0;
}
