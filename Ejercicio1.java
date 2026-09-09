package ape02;
import java.util.Scanner;

public class RegistroHora {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int hora;
        int minutos;
        int segundos;
        char respuesta;

        do {

            do {
                System.out.print("Ingrese la hora (0-23): ");
                hora = sc.nextInt();

                System.out.print("Ingrese los minutos (0-59): ");
                minutos = sc.nextInt();

                System.out.print("Ingrese los segundos (0-59): ");
                segundos = sc.nextInt();

                if (hora < 0 || hora > 23) {
                    System.out.println("Hora invalida.");
                }

                if (minutos < 0 || minutos > 59) {
                    System.out.println("Minutos invalidos.");
                }

                if (segundos < 0 || segundos > 59) {
                    System.out.println("Segundos invalidos.");
                }

            } while (hora < 0 || hora > 23 ||
                     minutos < 0 || minutos > 59 ||
                     segundos < 0 || segundos > 59);

            System.out.printf("Hora registrada: %02d:%02d:%02d%n",
                    hora, minutos, segundos);

            System.out.print("Desea cambiar la hora? (S/N): ");
            respuesta = sc.next().charAt(0);

        } while (respuesta == 'S' || respuesta == 's');

        System.out.println("Programa finalizado.");

        sc.close();
    }
}
