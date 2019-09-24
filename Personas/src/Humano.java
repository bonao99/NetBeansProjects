/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author tony
 */
public class Humano

{

 private  String nombre;
 private String apellido;
 private int edad;
 private char sexo;

 public void setNombre(String value)
 {    
     nombre = value;
 }
 
 public String getNombre()
 {
     return nombre;
 }
 
 public  void setApellido(String apellido)
 {
     this.apellido = apellido;
 }
         
 public String getApellido()
 {
     return apellido;
 }
 
 public void setEdad(int value)
 {
     edad = value;
     
 }
 
 public int getEdad()
 {
     return edad;
 }
 
 public void setSexo(char value)
 {
     if(sexo != 'M' && sexo != 'F')
         sexo = 'M';
                 else
         sexo = value;
 }
 
 public char getSexo()
 {
     return sexo;
 }
 
 
 
 
    

        
}
