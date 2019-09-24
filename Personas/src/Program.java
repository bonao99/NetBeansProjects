/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author tony
 */
public class Program 
{
    public static void main(String[] args)
    {

        Estudiante alfonso = new Estudiante();
        alfonso.setNombre("Alfonso");
        alfonso.setGrado(8);

        Humano jose = new Humano();
        jose.setNombre("Jose");

        Empleado myemp = new Empleado(1); // crea objeto 
        
        Empleado emp2 = new Empleado(2, "Jose", "Mejia", 23, 'M');
        
        myemp.setNombre("Tom");   // set nombre
        myemp.setSexo('C');      // set sexo

        printEmpleado(myemp); 
        
       
        
                
    }
    
       public static void printEmpleado(Empleado emp) //method to print Empleado info (se crea fuera main)
    {
        System.out.println(emp.getNombre());
        System.out.println(emp.getApellido());
        System.out.println(emp.getEdad());
        System.out.println(emp.getSexo());

        System.out.println(emp.getdepartamento());
        System.out.println(emp.gethoraExtrasSemanal());
        System.out.println(emp.getidEmpleado());
        System.out.println(emp.getsalarioHora());
        System.out.println(emp.getsalarioHorasExtra());




    }



    
}
