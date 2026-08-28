#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {
    int opcion;
    int formato = 0;
    int edad;
    int cantidad;
    int dia;
    char estudiante;

    double precio = 0;
    double subtotal;
    double descuento = 0;
    double recargo = 0;
    double total;

    do {
        cout << "\n===== CINE CAMPUS =====" << endl;
        cout << "1. Comprar entradas" << endl;
        cout << "2. Consultar precios" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Seleccion del formato
                cout << "\n--- FORMATO ---" << endl;
                cout << "1. 2D   - $5.00" << endl;
                cout << "2. 3D   - $7.50" << endl;
                cout << "3. IMAX - $10.00" << endl;
                cout << "Seleccione el formato: ";
                cin >> formato;

                // Validacion del formato
                if (formato < 1 || formato > 3) {
                    cout << "Formato fuera del rango." << endl;
                    break;
                }

                // Asignar precio
                switch (formato) {
                    case 1:
                        precio = 5.00;
                        break;
                    case 2:
                        precio = 7.50;
                        break;
                    case 3:
                        precio = 10.00;
                        break;
                }

                // Datos del cliente
                cout << "Ingrese la edad: ";
                cin >> edad;

                // Validacion de edad
                if (edad < 0 || edad > 120) {
                    cout << "Edad fuera del rango. Compra detenida." << endl;
                    break;
                }

                cout << "Ingrese la cantidad de entradas: ";
                cin >> cantidad;

                cout << "Ingrese el dia de la semana (1-7): ";
                cin >> dia;

                cout << "¿Es estudiante? (S/N): ";
                cin >> estudiante;
                estudiante = toupper(estudiante);

                // Resetear acumuladores para cada nueva compra
                descuento = 0;
                recargo = 0;

                // Calcular subtotal
                subtotal = precio * cantidad;

                // PROMOCIONES POR PRIORIDAD
                if (edad >= 65) {
                    // R3: 30% de descuento
                    descuento = subtotal * 0.30;
                    cout << "Promocion aplicada: Adulto mayor - 30%" << endl;

                } else if (edad <= 11) {
                    // R4: 20% de descuento
                    descuento = subtotal * 0.20;
                    cout << "Promocion aplicada: Nino - 20%" << endl;

                } else if (estudiante == 'S' && dia >= 1 && dia <= 5) {
                    // R5: 15% de descuento
                    descuento = subtotal * 0.15;
                    cout << "Promocion aplicada: Estudiante - 15%" << endl;

                } else if (dia == 3) {
                    // R6: 10% de descuento
                    descuento = subtotal * 0.10;
                    cout << "Promocion aplicada: Dia 3 - 10%" << endl;

                } else {
                    cout << "No se aplica descuento." << endl;
                }

                // R7: Recargo del 10% para IMAX los dias 6 o 7
                if (formato == 3 && (dia == 6 || dia == 7)) {
                    recargo = subtotal * 0.10;
                    cout << "Recargo IMAX fin de semana: 10%" << endl;
                }

                // R8: Combo pequeno de cortesia
                if (cantidad >= 4 && (estudiante == 'S' || edad <= 11)) {
                    cout << "¡Cortesia! Combo pequeno incluido." << endl;
                }

                // Calcular total
                total = subtotal - descuento + recargo;

                // Mostrar resultados
                cout << "\n===== RESUMEN DE COMPRA =====" << endl;
                cout << fixed << setprecision(2);
                cout << "Precio por entrada: $" << precio << endl;
                cout << "Cantidad: " << cantidad << endl;
                cout << "Subtotal: $" << subtotal << endl;
                cout << "Descuento: $" << descuento << endl;
                cout << "Recargo: $" << recargo << endl;
                cout << "TOTAL A PAGAR: $" << total << endl;

                break;

            case 2:
                cout << "\n===== PRECIOS =====" << endl;
                cout << "2D   = $5.00" << endl;
                cout << "3D   = $7.50" << endl;
                cout << "IMAX = $10.00" << endl;

                break;

            case 3:
                cout << "Gracias por visitar Cine Campus." << endl;

                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);

    return 0;
}
