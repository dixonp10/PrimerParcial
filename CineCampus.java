import java.util.Scanner;

public class CineCampus {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

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
            System.out.println("\n===== CINE CAMPUS =====");
            System.out.println("1. Comprar entradas");
            System.out.println("2. Consultar precios");
            System.out.println("3. Salir");
            System.out.print("Seleccione una opcion: ");
            opcion = sc.nextInt();

            switch (opcion) {

                case 1:

                    // Seleccion del formato
                    System.out.println("\n--- FORMATO ---");
                    System.out.println("1. 2D  - $5.00");
                    System.out.println("2. 3D  - $7.50");
                    System.out.println("3. IMAX - $10.00");
                    System.out.print("Seleccione el formato: ");
                    formato = sc.nextInt();

                    // Validacion del formato
                    if (formato < 1 || formato > 3) {
                        System.out.println("Formato fuera del rango.");
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
                    System.out.print("Ingrese la edad: ");
                    edad = sc.nextInt();

                    // Validacion de edad
                    if (edad < 0 || edad > 120) {
                        System.out.println("Edad fuera del rango. Compra detenida.");
                        break;
                    }

                    System.out.print("Ingrese la cantidad de entradas: ");
                    cantidad = sc.nextInt();

                    System.out.print("Ingrese el dia de la semana (1-7): ");
                    dia = sc.nextInt();

                    System.out.print("¿Es estudiante? (S/N): ");
                    estudiante = sc.next().toUpperCase().charAt(0);

                    // Calcular subtotal
                    subtotal = precio * cantidad;

                    // PROMOCIONES POR PRIORIDAD
                    if (edad >= 65) {
                        // R3: 30% de descuento
                        descuento = subtotal * 0.30;
                        System.out.println("Promocion aplicada: Adulto mayor - 30%");

                    } else if (edad <= 11) {
                        // R4: 20% de descuento
                        descuento = subtotal * 0.20;
                        System.out.println("Promocion aplicada: Nino - 20%");

                    } else if (estudiante == 'S' && dia >= 1 && dia <= 5) {
                        // R5: 15% de descuento
                        descuento = subtotal * 0.15;
                        System.out.println("Promocion aplicada: Estudiante - 15%");

                    } else if (dia == 3) {
                        // R6: 10% de descuento
                        descuento = subtotal * 0.10;
                        System.out.println("Promocion aplicada: Dia 3 - 10%");

                    } else {
                        System.out.println("No se aplica descuento.");
                    }

                    // R7: Recargo del 10% para IMAX los dias 6 o 7
                    if (formato == 3 && (dia == 6 || dia == 7)) {
                        recargo = subtotal * 0.10;
                        System.out.println("Recargo IMAX fin de semana: 10%");
                    }

                    // R8: Combo pequeno de cortesia
                    if (cantidad >= 4 && (estudiante == 'S' || edad <= 11)) {
                        System.out.println("¡Cortesia! Combo pequeno incluido.");
                    }

                    // Calcular total
                    total = subtotal - descuento + recargo;

                    // Mostrar resultados
                    System.out.println("\n===== RESUMEN DE COMPRA =====");
                    System.out.printf("Precio por entrada: $%.2f%n", precio);
                    System.out.println("Cantidad: " + cantidad);
                    System.out.printf("Subtotal: $%.2f%n", subtotal);
                    System.out.printf("Descuento: $%.2f%n", descuento);
                    System.out.printf("Recargo: $%.2f%n", recargo);
                    System.out.printf("TOTAL A PAGAR: $%.2f%n", total);

                    break;

                case 2:

                    System.out.println("\n===== PRECIOS =====");
                    System.out.println("2D   = $5.00");
                    System.out.println("3D   = $7.50");
                    System.out.println("IMAX = $10.00");

                    break;

                case 3:

                    System.out.println("Gracias por visitar Cine Campus.");

                    break;

                default:

                    System.out.println("Opcion no valida.");

            }

        } while (opcion != 3);

        sc.close();
    }
}
