import java.util.Scanner;
public class Invertir_Numero {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Ingresa el primer numero: ");
        int valor1 = sc.nextInt();
        
        System.out.println("Ingresa el segundo numero: ");
        int valor2 = sc.nextInt();
        
        int aux;
        
        aux = valor2;
        valor2 = valor1;
        valor1 = aux;
        
        System.out.println("El primer numero es: " + valor1);
        System.out.println("El segundo numero es: " + valor2);
    }
}
