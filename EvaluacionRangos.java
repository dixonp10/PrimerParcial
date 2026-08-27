package EjerciciosClase;
import java.util.Scanner;

public class EvaluacionRangos {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int edad;

        System.out.print("Ingresa tu edad: ");
        edad = sc.nextInt();

        if (edad < 18) {
            System.out.println("Clasificacion: Joven");
        } else {
            if (edad >= 18 && edad <= 64) {
                System.out.println("Clasificacion: Adulto");
            } else {
                System.out.println("Clasificacion: Tercera edad");
            }
        }

    }
}
