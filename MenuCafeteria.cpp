#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    cout << "+----- MENU UNIVERSITARIO -----+" << endl;
    cout << "|                              |" << endl;
    cout << "| 1. Sanduche de Pollo [1.50] |" << endl;
    cout << "| 2. Cafe con Leche   [1.00]  |" << endl;
    cout << "| 3. Mini Hamburguesa [3.75]  |" << endl;
    cout << "|                              |" << endl;
    cout << "+------------------------------+" << endl;

    int producto, cantidad;

    cout << ">> Ingresa el producto a adquirir (numero): ";
    cin >> producto;

    cout << ">> Ingresa la cantidad a adquirir: ";
    cin >> cantidad;

    string nombre_producto = "Nada";
    double precio = 0;

    switch (producto) {
        case 1:
            precio = 1.50;
            nombre_producto = "Sanduche de Pollo";
            break;

        case 2:
            precio = 1.00;
            nombre_producto = "Cafe con Leche";
            break;

        case 3:
            precio = 3.75;
            nombre_producto = "Mini Hamburguesa";
            break;

        default:
            cout << "+--------------------------------------------------+" << endl;
            cout << "| ERROR >> La opcion ingresada no esta en el menu. |" << endl;
            cout << "+--------------------------------------------------+" << endl;
            return 0;
    }

    double subtotal = precio * cantidad;
    double descuento = 0;

    if (subtotal >= 10) {
        descuento = subtotal * 0.10;
    }

    double total = subtotal - descuento;

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "+------------- FACTURA -------------+" << endl;
    cout << "|                                   |" << endl;
    cout << "| Producto: " << nombre_producto << endl;
    cout << "| Cantidad: " << cantidad << endl;
    cout << "| Precio:   $" << precio << endl;
    cout << "| Subtotal: $" << subtotal << endl;
    cout << "| Descuento: $" << descuento << endl;
    cout << "| Total:    $" << total << endl;
    cout << "|                                   |" << endl;
    cout << "+-----------------------------------+" << endl;

    return 0;
}
