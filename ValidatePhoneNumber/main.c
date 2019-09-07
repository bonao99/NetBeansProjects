/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on September 4, 2019, 4:12 PM
 * Hacer que usuario introduzca un valor en un array de char
 * y validate que sean numeros de telephone
 * 
 * 
 * Created on September 2, 2019, 7:31 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
/*
 * 
 */
int notisdigit(char a);

int main(int argc, char** argv) 
{
    int INDEX;
    printf("Enter Size");
    scanf("%d",&INDEX);
    char names[INDEX];
    int bool = 1;
    
    while(bool == 1)
    {
        
        printf("Entre Telefono\n");
        scanf("%s",names);
        for(int i=0;i < INDEX;i++)
        {
          bool = notisdigit(names[i]);
          if(bool == 1)
          {
              printf("Telefono es incorrecto\n");
              break;
          }
          
        }
        
                  
    }
    

    return (EXIT_SUCCESS);
}

int notisdigit(char a)
{
    //
    if(a < 48 || a > 57)
    {
        return 1;
    }
    else {
        return 0;
    }
}
