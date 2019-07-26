/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 15, 2019, 9:36 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{

    float alt, edad, peso;
    
    printf("\n Entre estatura en CM : ");
    scanf("%f", &alt);
    
    printf("\n Entre edad : ");
    scanf("%f", &edad);
    
    peso = (((alt - 100) + edad) / 10 ) * 0.09;
    
    printf("\nPeso ideal es : %f lbs\n", peso);
    
    return (EXIT_SUCCESS);
}

