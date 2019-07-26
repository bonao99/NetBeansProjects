/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 20, 2019, 4:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    char texto[100];

    int i, count = 0;

    printf("\nEntre palabra : ");
    scanf("%s", texto);
   
    
    for(i= 0;i <= 99; i++)
    {
        if ( texto[i] == 'a')
            count = count + 1;
              if ( texto[i] == 'e')
            count = count + 1;
              if ( texto[i] == 'o')
            count = count + 1;
              if ( texto[i] == 'u')
            count = count + 1;
              if ( texto[i] == 'i')
            count = count + 1;

    }
    
    printf("Texto found : %d veces ",count);
    
    return (EXIT_SUCCESS);
}

