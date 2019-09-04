/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Hacer que usuario introduzca un valor en u array de char
 * y validate que sean numeros de telephone
 * 
 * 
 * Created on September 2, 2019, 7:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int isdigit(char a);

int main(int argc, char** argv) 
{
    char names[20] = "";
    int bool = 1;
    
    while(bool == 1)
    {
        
        printf("Entre Nombre\n");
        scanf("%s",names);
        for(int i=0;i <= 19;i++)
        {
          bool = isdigit(names[i]);
          if(bool == 1)
          {
              printf("Nombre es incorrecto\n");
              break;
          }
        }
        
                  
    }
    
    
    
    
    return (EXIT_SUCCESS);
}


int isdigit(char a)
{
    
    if(a >= 48 && a <= 57)
    {
        return 1;
    }
    else {
        return 0;
    }
}
