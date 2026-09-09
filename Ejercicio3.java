package ape02;
import java.util.Scanner;

public class Jean {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int codigo;
        String color;
        String talla;
        char tenido;
        int cantidadTenidos;
        double precio;
        int cantidadBotones;
        double humedad;
        String estadoTela;
        int opcion;

        System.out.println("REGISTRO DEL JEAN");

        System.out.print("Ingrese el codigo: ");
        codigo = sc.nextInt();

        sc.nextLine();

        System.out.print("Ingrese el color: ");
        color = sc.nextLine();

        System.out.print("Ingrese la talla: ");
        talla = sc.nextLine();

        System.out.print("Fue tenido? (S/N): ");
        tenido = sc.next().charAt(0);

        System.out.print("Ingrese la cantidad de tenidos: ");
        cantidadTenidos = sc.nextInt();

        System.out.print("Ingrese el precio: $");
        precio = sc.nextDouble();

        System.out.print("Ingrese la cantidad de botones: ");
        cantidadBotones = sc.nextInt();

        System.out.print("Ingrese la humedad de la tela: ");
        humedad = sc.nextDouble();

        sc.nextLine();

        System.out.print("Ingrese el estado de la tela: ");
        estadoTela = sc.nextLine();

        do {

            System.out.println("\nMENU");
            System.out.println("1. Mostrar datos");
            System.out.println("2. Lavar");
            System.out.println("3. Secar");
            System.out.println("4. Salir");
            System.out.print("Seleccione una opcion: ");
            opcion = sc.nextInt();

            switch (opcion) {

                case 1:

                    System.out.println("\nDATOS DEL JEAN");
                    System.out.println("Codigo: " + codigo);
                    System.out.println("Color: " + color);
                    System.out.println("Talla: " + talla);
                    System.out.println("Fue tenido: " + tenido);
                    System.out.println("Cantidad de tenidos: "
                            + cantidadTenidos);
                    System.out.printf("Precio: $%.2f%n", precio);
                    System.out.println("Cantidad de botones: "
                            + cantidadBotones);
                    System.out.println("Humedad: " + humedad);
                    System.out.println("Estado de la tela: "
                            + estadoTela);

                    break;

                case 2:

                    if (cantidadTenidos > 0) {

                        cantidadTenidos--;

                        System.out.println("El jean fue lavado.");
                        System.out.println("Cantidad de tenidos: "
                                + cantidadTenidos);

                    } else {

                        System.out.println(
                                "No se puede disminuir mas la cantidad de tenidos.");
                    }

                    break;

                case 3:

                    if (humedad > 0) {

                        humedad -= 10;

                        if (humedad < 0) {
                            humedad = 0;
                        }

                        System.out.println("El jean fue secado.");
                        System.out.println("Humedad actual: "
                                + humedad);

                    } else {

                        System.out.println(
                                "El jean ya no tiene humedad.");
                    }

                    break;

                case 4:

                    System.out.println("Saliendo del sistema...");

                    break;

                default:

                    System.out.println("Opcion invalida.");
            }

        } while (opcion != 4);

        System.out.println("Programa finalizado.");

        sc.close();
    }
}
