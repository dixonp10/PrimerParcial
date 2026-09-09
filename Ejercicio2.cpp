#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string dni;
    int cantidadCuentas;
    int cuentaSeleccionada;
    int cuentaDestino;
    int opcion;
    double monto;

    cout << "Ingrese el DNI del cliente: ";
    cin >> dni;

    do {
        cout << "Ingrese la cantidad de cuentas a crear (1-3): ";
        cin >> cantidadCuentas;

        if (cantidadCuentas < 1 || cantidadCuentas > 3) {
            cout << "Cantidad de cuentas invalida." << endl;
        }

    } while (cantidadCuentas < 1 || cantidadCuentas > 3);

    double saldos[3];

    for (int i = 0; i < cantidadCuentas; i++) {

        do {
            cout << "Ingrese el saldo inicial de la cuenta "
                 << i + 1 << ": $";
            cin >> saldos[i];

            if (saldos[i] < 0) {
                cout << "El saldo no puede ser negativo." << endl;
            }

        } while (saldos[i] < 0);
    }

    do {

        cout << "\nCUENTAS DEL CLIENTE" << endl;
        cout << "DNI: " << dni << endl;

        for (int i = 0; i < cantidadCuentas; i++) {
            cout << fixed << setprecision(2);
            cout << "Cuenta " << i + 1
                 << " - Saldo: $" << saldos[i] << endl;
        }

        do {
            cout << "Seleccione una cuenta: ";
            cin >> cuentaSeleccionada;

            if (cuentaSeleccionada < 1
                || cuentaSeleccionada > cantidadCuentas) {

                cout << "Cuenta invalida." << endl;
            }

        } while (cuentaSeleccionada < 1
                 || cuentaSeleccionada > cantidadCuentas);

        do {

            cout << "\nMENU" << endl;
            cout << "1. Ver atributos de la cuenta" << endl;
            cout << "2. Enviar dinero" << endl;
            cout << "3. Recibir dinero" << endl;
            cout << "4. Salir del sistema" << endl;
            cout << "5. Transferir entre cuentas" << endl;
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            switch (opcion) {

                case 1:

                    cout << "\nATRIBUTOS DE LA CUENTA" << endl;
                    cout << "DNI: " << dni << endl;
                    cout << "Numero de cuenta: "
                         << cuentaSeleccionada << endl;
                    cout << fixed << setprecision(2);
                    cout << "Saldo: $"
                         << saldos[cuentaSeleccionada - 1]
                         << endl;

                    break;

                case 2:

                    cout << "Ingrese el monto a enviar: $";
                    cin >> monto;

                    if (monto > 0) {

                        if (monto <= saldos[cuentaSeleccionada - 1]) {

                            saldos[cuentaSeleccionada - 1] -= monto;

                            cout << "Dinero enviado correctamente."
                                 << endl;

                        } else {
                            cout << "Saldo insuficiente." << endl;
                        }

                    } else {
                        cout << "Monto invalido." << endl;
                    }

                    break;

                case 3:

                    cout << "Ingrese el monto a recibir: $";
                    cin >> monto;

                    if (monto > 0) {

                        saldos[cuentaSeleccionada - 1] += monto;

                        cout << "Dinero recibido correctamente."
                             << endl;

                    } else {
                        cout << "Monto invalido." << endl;
                    }

                    break;

                case 4:

                    cout << "Saliendo del sistema..." << endl;

                    break;

                case 5:

                    cout << "Ingrese la cuenta destino: ";
                    cin >> cuentaDestino;

                    if (cuentaDestino >= 1
                        && cuentaDestino <= cantidadCuentas) {

                        if (cuentaDestino != cuentaSeleccionada) {

                            cout << "Ingrese el monto a transferir: $";
                            cin >> monto;

                            if (monto > 0) {

                                if (monto
                                    <= saldos[cuentaSeleccionada - 1]) {

                                    saldos[cuentaSeleccionada - 1]
                                        -= monto;

                                    saldos[cuentaDestino - 1]
                                        += monto;

                                    cout << "Transferencia realizada "
                                         << "correctamente." << endl;

                                } else {
                                    cout << "Saldo insuficiente."
                                         << endl;
                                }

                            } else {
                                cout << "Monto invalido." << endl;
                            }

                        } else {

                            cout << "No puede transferir a la "
                                 << "misma cuenta." << endl;
                        }

                    } else {

                        cout << "Cuenta destino invalida." << endl;
                    }

                    break;

                default:

                    cout << "Opcion invalida." << endl;
            }

        } while (opcion != 4);

    } while (opcion != 4);

    cout << "Sistema finalizado." << endl;

    return 0;
}
