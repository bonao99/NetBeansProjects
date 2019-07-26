/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 21, 2019, 10:07 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    char name[100];
    char apellido[100];
    char numapellido[200];
    
    printf("\n Entre Nombre :");
    scanf("%s", name);
    printf("\n Entre Apellido :");
    scanf("%s", apellido);
    
    for (int i = 0; i <= 99; i++)
    {
      
        numapellido[i] =   name[i];
        
        numapellido[i+100] = apellido[i];
        
    }
    
    printf("\n");
    
    for (int x =0;x <= 199; x++)
    {
        printf("%c",numapellido[x]);
    }
    

    return (EXIT_SUCCESS);
}

