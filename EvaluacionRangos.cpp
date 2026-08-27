#include <iostream>
using namespace std;

int main() {

    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad < 18) {
        cout << "Clasificacion: Joven" << endl;
    } else {
        if (edad >= 18 && edad <= 64) {
            cout << "Clasificacion: Adulto" << endl;
        } else {
            cout << "Clasificacion: Tercera edad" << endl;
        }
    }

    return 0;
}
