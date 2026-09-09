#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int codigo;
    string color;
    string talla;
    char tenido;
    int cantidadTenidos;
    double precio;
    int cantidadBotones;
    double humedad;
    string estadoTela;
    int opcion;

    cout << "REGISTRO DEL JEAN" << endl;

    cout << "Ingrese el codigo: ";
    cin >> codigo;

    cin.ignore();

    cout << "Ingrese el color: ";
    getline(cin, color);

    cout << "Ingrese la talla: ";
    getline(cin, talla);

    cout << "Fue tenido? (S/N): ";
    cin >> tenido;

    cout << "Ingrese la cantidad de tenidos: ";
    cin >> cantidadTenidos;

    cout << "Ingrese el precio: $";
    cin >> precio;

    cout << "Ingrese la cantidad de botones: ";
    cin >> cantidadBotones;

    cout << "Ingrese la humedad de la tela: ";
    cin >> humedad;

    cin.ignore();

    cout << "Ingrese el estado de la tela: ";
    getline(cin, estadoTela);

    do {

        cout << "\nMENU" << endl;
        cout << "1. Mostrar datos" << endl;
        cout << "2. Lavar" << endl;
        cout << "3. Secar" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:

                cout << "\nDATOS DEL JEAN" << endl;
                cout << "Codigo: " << codigo << endl;
                cout << "Color: " << color << endl;
                cout << "Talla: " << talla << endl;
                cout << "Fue tenido: " << tenido << endl;
                cout << "Cantidad de tenidos: "
                     << cantidadTenidos << endl;

                cout << fixed << setprecision(2);
                cout << "Precio: $" << precio << endl;

                cout << "Cantidad de botones: "
                     << cantidadBotones << endl;

                cout << "Humedad: " << humedad << endl;

                cout << "Estado de la tela: "
                     << estadoTela << endl;

                break;

            case 2:

                if (cantidadTenidos > 0) {

                    cantidadTenidos--;

                    cout << "El jean fue lavado." << endl;
                    cout << "Cantidad de tenidos: "
                         << cantidadTenidos << endl;

                } else {

                    cout << "No se puede disminuir mas "
                         << "la cantidad de tenidos."
                         << endl;
                }

                break;

            case 3:

                if (humedad > 0) {

                    humedad -= 10;

                    if (humedad < 0) {
                        humedad = 0;
                    }

                    cout << "El jean fue secado." << endl;
                    cout << "Humedad actual: "
                         << humedad << endl;

                } else {

                    cout << "El jean ya no tiene humedad."
                         << endl;
                }

                break;

            case 4:

                cout << "Saliendo del sistema..." << endl;

                break;

            default:

                cout << "Opcion invalida." << endl;
        }

    } while (opcion != 4);

    cout << "Programa finalizado." << endl;

    return 0;
}
