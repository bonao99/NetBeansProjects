/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 15, 2019, 7:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int a, b, temp;
    
    printf("\n Entre A : ");
    scanf("%d",&a);
    printf("\n Entre B : ");
    scanf("%d",&b);
    printf("\nA,B ante de cambio %d %d",a,b);
    temp = a;
    
    a = b;
    b = temp;

    printf("\nA = %d",a);
    printf("\nB = %d\n",b);
    
    return (EXIT_SUCCESS);
}

