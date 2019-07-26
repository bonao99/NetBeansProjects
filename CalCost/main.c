/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 15, 2019, 6:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    float margin, pventa, cost, ganar ;
    
    margin = 15;

    printf("\nEntre Costo: ");
    scanf("%f", &cost);
    
    ganar = cost * (margin/100);
    pventa = cost + ganar;
    
    printf("\nPrecio de venta es :%0.5f \n",pventa);
     
    return (EXIT_SUCCESS);
}

