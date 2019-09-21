/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Create a Human
 * and methods
 * @author tony
 */
public class Human {

    /**
     * @param args the command line arguments
     */
    
    
       String name;
       int age;
       int heigthInInches;
       String eyeColor;
       
    public Human(){
        
    }
       

    public void speak()
       {
           System.out.println("Hello, my name is "+ name);
           System.out.println("I am "+ heigthInInches + " inches tall");
           System.out.println("I am "+ age + " years old");
           System.out.println("My eye color is " + eyeColor);
       }
   
    public void walk()
       {
         System.out.println("Walking ... ");

       }
       
    public void eat()
       {
           
         System.out.println("Eating ... ");
       }
         
       
    }
   
