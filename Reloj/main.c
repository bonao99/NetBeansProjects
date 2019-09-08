/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on September 7, 2019, 7:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    for(int hr =1; hr <= 1; hr ++)
    {
        
         
        for(int min = 1;min <= 1; min++)
        {
             
             
            for(int seg = 0; seg <= 59; seg ++)
            {
             printf("Segundo :%d\n",seg);   
            }
            printf("Min :%d\n",min); 
    }
         printf("HR :%d\n",hr); 
        
    }
    return (EXIT_SUCCESS);
}

