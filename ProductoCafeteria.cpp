#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombre, cedula, tel, dir, producto;
    int cantidad;
    double precio_unit, subtotal, total, pago;

    cout << "DATOS DEL CLIENTE" << endl;

    cout << "Ingresa el nombre: ";
    getline(cin, nombre);

    cout << "Ingresa la cedula: ";
    getline(cin, cedula);

    cout << "Ingresa el telefono: ";
    getline(cin, tel);

    cout << "Ingresa la direccion: ";
    getline(cin, dir);

    cout << "\nDATOS DEL PRODUCTO" << endl;

    cout << "Ingresa el nombre: ";
    getline(cin, producto);

    cout << "Ingresa la cantidad: ";
    cin >> cantidad;

    cout << "Ingresa el precio unitario: ";
    cin >> precio_unit;

    subtotal = precio_unit * cantidad;
    total = (subtotal * 90) / 100;

    cout << "Ingresa pago: ";
    cin >> pago;

    if (pago >= total) {

        cout << "\n==== FACTURA ====" << endl;
        cout << "1. Datos del cliente:" << endl;
        cout << "  Nombre: " << nombre << endl;
        cout << "  Cedula: " << cedula << endl;
        cout << "  Telefono: " << tel << endl;
        cout << "  Direccion: " << dir << endl;

        cout << "\n2. Datos del producto:" << endl;
        cout << "  PRODUCTO    PRECIO    SUBTOTAL (10%)    TOTAL" << endl;
        cout << "  " << producto
             << "    $" << precio_unit
             << "          $" << subtotal
             << "           $" << total << endl;

    } else {
        cout << "El pago no pudo ser procesado" << endl;
    }

    return 0;
}
