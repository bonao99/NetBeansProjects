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
    int i,sum = 0, num = 0;
    
    for(i = 0; i <= 2; i++)
    {
       
        printf("Enter Number: \n");
              scanf("%d", &vector1[i]);
        
  
        
    }
    
    for(int j=1;j <=3;j++)
    {
        vector1[i] = vector1[i] + 1;
     
    }
    
       printf("%d", vector1[i]);
    return (EXIT_SUCCESS);
}

