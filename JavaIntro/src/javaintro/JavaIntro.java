/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaintro;

/**
 *
 * @author tony
*/
import static java.lang.System.out;
import java.util.Random;
import java.util.Scanner;

public class JavaIntro {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int valor1, valor2;
        Scanner input = new Scanner(System.in);
        Random rd = new Random();
        
        out.println("Introduzca Numero:");
      
        valor1 = input.nextInt();
        System.out.println("Introduzca numero 2:");
        valor2 = input.nextInt();
        
        System.out.println("Suma es :"+(valor1 + valor2));
        System.out.println("Esto es un Random :"+ rd.nextInt(50));  
        System.out.println("Esto es un Random :"+ rd.nextBoolean()); 
        System.out.println("Esto es una Raiz cuadradada :"+ Math.sqrt(49)); 
        // TODO code application logic here
    }
    
}
