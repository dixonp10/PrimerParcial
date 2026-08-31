#include <iostream>
using namespace std;

int main() {
    int valor1, valor2, aux;

    cout << "Ingresa el primer numero: ";
    cin >> valor1;

    cout << "Ingresa el segundo numero: ";
    cin >> valor2;

    aux = valor2;
    valor2 = valor1;
    valor1 = aux;

    cout << "El primer numero es: " << valor1 << endl;
    cout << "El segundo numero es: " << valor2 << endl;

    return 0;
}
