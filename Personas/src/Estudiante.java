/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author tony
 */
public class Estudiante extends Humano 
{
private int idEstudiante;
private int grado;
private char seccion;




public void setIdEstudiante(int value)
{
    idEstudiante = value;

}

public int getIdEstudiante()
{
    return idEstudiante;
}

public void setGrado(int value)
{
    grado = value;
}

public int getGrado()
{
    return grado;
}

public void setSeccion(char value)
{
    seccion = value;
}

public char getSeccion()
{
    return seccion;
}


}
