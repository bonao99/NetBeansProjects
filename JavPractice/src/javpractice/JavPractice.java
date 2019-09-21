/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javpractice;

/**
 * Add division part
 * mult and subtraction
 * sobrecaragdo and int and double
 *
 * @author tony
 */
public class JavPractice {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
     
        MyMath adding = new MyMath();
        System.out.println(adding.add(5, 7));
        
        Car car = new Car();
        car.setColor("Blue");
        
        Car car2 = new Car();
        car2.setColor("Yellow");   
            
        System.out.println("Car 1 is "+car.getColor());
        System.out.println("Car 2 is "+car2.getColor());
                
    }
    
}
