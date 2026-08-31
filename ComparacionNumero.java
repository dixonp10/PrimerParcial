import java.util.Scanner; 

public class ComparacionNumero { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 

        System.out.print("Ingresa el numero a comparar: "); 
        int numero = sc.nextInt(); 

        if (numero > 0 && numero < 100) { 
            System.out.println("El numero es valido."); 
        } else{ 
            System.out.println("El numero no cumple"); 
        } 
    } 
} 
