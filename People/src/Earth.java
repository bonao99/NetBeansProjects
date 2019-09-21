/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author tony
 */
public class Earth {
    public static void main(String args[]){
     
        Human tony;
        tony = new Human();
        
        tony.age = 17;
        tony.eyeColor = "brown";
        tony.heigthInInches = 72;
        tony.name = "Tony Mejia";
                
        tony.speak();
        tony.walk();
        tony.eat();
                
                
        
    }
    
}
