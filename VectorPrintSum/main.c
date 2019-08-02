/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 27, 2019, 5:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

    int vector1[10];
    int i,sum = 0, mult=1;
    
    for(i = 0; i <= 9; i++)
    {
       
        printf("\nEnter Number:");
        scanf("%d", &vector1[i]);
           
    }
    
    for(int j=0;j <=9;j++)
    {
        sum = sum + vector1[j];
        mult = mult * vector1[j];
        
    }
    
       printf("%d\n", sum);
       printf("%d\n", mult);
    return (EXIT_SUCCESS);
}

