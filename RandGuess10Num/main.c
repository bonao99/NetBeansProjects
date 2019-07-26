/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 20, 2019, 3:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int input = -1;
    int guess = rand() %10;
    
    while (input != guess)
        
    {
          
        printf("\nEnter Guess 1- 9 : ");
        scanf("%d",&input);
             
    }
       
         printf("\nYou Guess is right ! %d", input);  
         
    
       
       
       return (EXIT_SUCCESS);
}

