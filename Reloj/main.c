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
        
         
        for(int min = 1;min <= 3; min++)
        {
             
             
            for(int seg = 0; seg <= 59; seg ++)
            {
             printf("Segundo :%d ",seg); 
             if(seg == 14 || seg == 29 || seg == 44)
                 printf("\n");
            }
            printf("Min :%d\n",min); 
    }
         printf("HR :%d\n",hr); 
        
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

