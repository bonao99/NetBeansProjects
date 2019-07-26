/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 20, 2019, 6:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    char texto[255];
    int count = 0;
    
    
    printf("\nIntroduzca texto:");
    fgets(texto, 255, stdin);
    
    for (int i=0; i <= 254;i++)
    {
     if (texto[i] == 32)   
         count = count + 1;
    }
    
    printf("La cantida de palabras es:%d", count - 1);
    
    return (EXIT_SUCCESS);
}

