#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int hora;
    int minutos;
    int segundos;
    char respuesta;

    do {

        do {
            cout << "Ingrese la hora (0-23): ";
            cin >> hora;

            cout << "Ingrese los minutos (0-59): ";
            cin >> minutos;

            cout << "Ingrese los segundos (0-59): ";
            cin >> segundos;

            if (hora < 0 || hora > 23) {
                cout << "Hora invalida." << endl;
            }

            if (minutos < 0 || minutos > 59) {
                cout << "Minutos invalidos." << endl;
            }

            if (segundos < 0 || segundos > 59) {
                cout << "Segundos invalidos." << endl;
            }

        } while (hora < 0 || hora > 23 ||
                 minutos < 0 || minutos > 59 ||
                 segundos < 0 || segundos > 59);

        cout << "Hora registrada: "
             << setfill('0') << setw(2) << hora << ":"
             << setfill('0') << setw(2) << minutos << ":"
             << setfill('0') << setw(2) << segundos << endl;

        cout << "Desea cambiar la hora? (S/N): ";
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    cout << "Programa finalizado." << endl;

    return 0;
}
