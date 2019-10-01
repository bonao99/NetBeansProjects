/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author tony
 */
public class Empleado extends Humano
{

private int idEmpleado;
private String departamento;
private float salarioHora;
private float horasSemanal;
private float salarioHorasExtra;
private float horaExtrasSemanal;


public Empleado(int idEmpleado )
{
this.idEmpleado = idEmpleado;
   
}

public Empleado(int idEmpleado, String nombre, String apellido, int edad, char sexo)
{
this.idEmpleado = idEmpleado;
this.setNombre(nombre);
this.setApellido(apellido);
this.setEdad(edad);
this.setSexo(sexo);
}


public void setidEmpleado(int value)
{
    idEmpleado = value;
   
}

public int getidEmpleado()
{
    return idEmpleado;
}


public void setdepartamento(String value)
{
    departamento = value;
   
}

public String getdepartamento()
{
    return departamento;
}


public void setsalarioHora(float value)
{
    salarioHora = value;
   
}

public float getsalarioHora()
{
    return salarioHora;
}


public float gethorasSemanal()
{
    return horasSemanal;
}


public void sethorasSemanal(float value)
{
    horasSemanal = value;
   
}



public void setsalarioHorasExtra(float value)
{
    salarioHorasExtra = value;
   
}

public float getsalarioHorasExtra()
{
    return salarioHorasExtra;
}


public void sethoraExtrasSemanal(float value)
{
    horaExtrasSemanal = value;
   
}

public float gethoraExtrasSemanal()
{
    return horaExtrasSemanal;
}


}
