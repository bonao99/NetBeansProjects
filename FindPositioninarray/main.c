/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 17, 2019, 4:43 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
        int arr[100];
    int menor = 0;
    int mayor = 0;
    int posmenor;
    int posmayor;
    
    for(int i = 0;i <= 99;i ++)
    {
        arr[i] = rand() % 100;
    }
    
    for(int x = 0;x <= 99;x ++)
    {
        printf("%d\n",arr[x]);
                        
    }
    
       printf("\n");
      
    for(int j=0;j <= 99;j ++)
    {
        
        if(j == 0)
        {
           menor = arr[0];
           posmenor = 0;

        }
           else 
        {
            
             if(arr[j] < menor)
                {
                   menor = arr[j];
                   posmenor = j;

                }
        }
      
    }
         printf("Smallest : %d Position of menor %d\n",menor,posmenor);
         
         

   for(int j=0;j <= 99;j ++)
   {
        
        if(j == 0)
        {
           mayor = arr[j];
           posmayor = j ;
        }
           else 
        {
            
             if(arr[j] > mayor)
                {
                   mayor = arr[j];
                   posmayor = j;

                }
            
        }
     
    }
          arr[posmayor] = menor;
          arr[posmenor] = mayor;
         
        printf("\n");
        printf("Largest : %d Position de Mayor %d",mayor,posmayor);
    
     

    return (EXIT_SUCCESS);
}

