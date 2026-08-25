import java.util.Scanner;

public class ProgramaCafeteria {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String nombre, cedula, tel, dir, producto;
        int cantidad;
        double precio_unit, subtotal, total, pago;

        System.out.println("DATOS DEL CLIENTE");
        System.out.print("Ingresa el nombre: ");
        nombre = sc.nextLine();

        System.out.print("Ingresa la cedula: ");
        cedula = sc.nextLine();

        System.out.print("Ingresa el telefono: ");
        tel = sc.nextLine();

        System.out.print("Ingresa la direccion: ");
        dir = sc.nextLine();

        System.out.println("\nDATOS DEL PRODUCTO");

        System.out.print("Ingresa el nombre: ");
        producto = sc.nextLine();

        System.out.print("Ingresa la cantidad: ");
        cantidad = sc.nextInt();

        System.out.print("Ingresa el precio unitario: ");
        precio_unit = sc.nextDouble();

        subtotal = precio_unit * cantidad;
        total = (subtotal * 90) / 100;

        System.out.print("Ingresa pago: ");
        pago = sc.nextDouble();

        if (pago >= total) {

            System.out.println("\n==== FACTURA ====");
            System.out.println("1. Datos del cliente:");
            System.out.println("  Nombre: " + nombre);
            System.out.println("  Cedula: " + cedula);
            System.out.println("  Telefono: " + tel);
            System.out.println("  Direccion: " + dir);

            System.out.println("\n2. Datos del producto:");
            System.out.println("  PRODUCTO    PRECIO    SUBTOTAL (10%)    TOTAL");
            System.out.println("  " + producto + "    $" + precio_unit
                    + "          $" + subtotal + "           $" + total);

        } else {
            System.out.println("El pago no pudo ser procesado");
        }

        sc.close();
    }
}
