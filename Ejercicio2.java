package ape02;
import java.util.Scanner;

public class SistemaCuentasBancarias {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String dni;
        int cantidadCuentas;
        int cuentaSeleccionada;
        int cuentaDestino;
        int opcion;
        double monto;

        System.out.print("Ingrese el DNI del cliente: ");
        dni = sc.nextLine();

        do {
            System.out.print("Ingrese la cantidad de cuentas a crear (1-3): ");
            cantidadCuentas = sc.nextInt();

            if (cantidadCuentas < 1 || cantidadCuentas > 3) {
                System.out.println("Cantidad de cuentas invalida.");
            }

        } while (cantidadCuentas < 1 || cantidadCuentas > 3);

        double[] saldos = new double[cantidadCuentas];

        for (int i = 0; i < cantidadCuentas; i++) {
            do {
                System.out.print("Ingrese el saldo inicial de la cuenta "
                        + (i + 1) + ": $");
                saldos[i] = sc.nextDouble();

                if (saldos[i] < 0) {
                    System.out.println("El saldo no puede ser negativo.");
                }

            } while (saldos[i] < 0);
        }

        do {

            System.out.println("\nCUENTAS DEL CLIENTE");
            System.out.println("DNI: " + dni);

            for (int i = 0; i < cantidadCuentas; i++) {
                System.out.printf("Cuenta %d - Saldo: $%.2f%n",
                        i + 1, saldos[i]);
            }

            do {
                System.out.print("Seleccione una cuenta: ");
                cuentaSeleccionada = sc.nextInt();

                if (cuentaSeleccionada < 1
                        || cuentaSeleccionada > cantidadCuentas) {
                    System.out.println("Cuenta invalida.");
                }

            } while (cuentaSeleccionada < 1
                    || cuentaSeleccionada > cantidadCuentas);

            do {

                System.out.println("\nMENU");
                System.out.println("1. Ver atributos de la cuenta");
                System.out.println("2. Enviar dinero");
                System.out.println("3. Recibir dinero");
                System.out.println("4. Salir del sistema");
                System.out.println("5. Transferir entre cuentas");
                System.out.print("Seleccione una opcion: ");
                opcion = sc.nextInt();

                switch (opcion) {

                    case 1:
                        System.out.println("\nATRIBUTOS DE LA CUENTA");
                        System.out.println("DNI: " + dni);
                        System.out.println("Numero de cuenta: "
                                + cuentaSeleccionada);
                        System.out.printf("Saldo: $%.2f%n",
                                saldos[cuentaSeleccionada - 1]);
                        break;

                    case 2:
                        System.out.print("Ingrese el monto a enviar: $");
                        monto = sc.nextDouble();

                        if (monto > 0) {
                            if (monto <= saldos[cuentaSeleccionada - 1]) {
                                saldos[cuentaSeleccionada - 1] -= monto;

                                System.out.println(
                                        "Dinero enviado correctamente.");
                            } else {
                                System.out.println("Saldo insuficiente.");
                            }
                        } else {
                            System.out.println("Monto invalido.");
                        }
                        break;

                    case 3:
                        System.out.print("Ingrese el monto a recibir: $");
                        monto = sc.nextDouble();

                        if (monto > 0) {
                            saldos[cuentaSeleccionada - 1] += monto;

                            System.out.println(
                                    "Dinero recibido correctamente.");
                        } else {
                            System.out.println("Monto invalido.");
                        }
                        break;

                    case 4:
                        System.out.println("Saliendo del sistema...");
                        break;

                    case 5:
                        System.out.print("Ingrese la cuenta destino: ");
                        cuentaDestino = sc.nextInt();

                        if (cuentaDestino >= 1
                                && cuentaDestino <= cantidadCuentas) {

                            if (cuentaDestino != cuentaSeleccionada) {

                                System.out.print(
                                        "Ingrese el monto a transferir: $");
                                monto = sc.nextDouble();

                                if (monto > 0) {

                                    if (monto <= saldos[cuentaSeleccionada - 1]) {

                                        saldos[cuentaSeleccionada - 1]
                                                -= monto;

                                        saldos[cuentaDestino - 1]
                                                += monto;

                                        System.out.println(
                                                "Transferencia realizada correctamente.");

                                    } else {
                                        System.out.println(
                                                "Saldo insuficiente.");
                                    }

                                } else {
                                    System.out.println("Monto invalido.");
                                }

                            } else {
                                System.out.println(
                                        "No puede transferir a la misma cuenta.");
                            }

                        } else {
                            System.out.println("Cuenta destino invalida.");
                        }
                        break;

                    default:
                        System.out.println("Opcion invalida.");
                }

            } while (opcion != 4);

        } while (opcion != 4);

        System.out.println("Sistema finalizado.");

        sc.close();
    }
}
