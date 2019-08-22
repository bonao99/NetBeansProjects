/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 16, 2019, 7:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    int arr[100000];
    int menor = 0;
    int mayor = 0;

    for(int i = 0;i <= 99999;i ++)
    {
        arr[i] = rand();
    }
    
    for(int x = 0;x <= 99999;x ++)
    {
        printf("%d\n",arr[x]);
                        
    }
    
       printf("\n");
      
    for(int j=0;j <= 99999;j ++)
    {
        
        if(j == 0)
           menor = arr[j];
        else 
        {
            
             if(arr[j] < menor)
                {
                   menor = arr[j];

                }
        }
      
    }
         printf("Smallest : %d\n",menor);
         
         

   for(int j=0;j <= 99999;j ++)
   {
        
        if(j == 0)
           mayor = arr[j];
        else 
        {
            
             if(arr[j] > mayor)
                {
                   mayor = arr[j];

                }
        }
      
    }
         
        printf("\n");
        printf("Largest : %d\n",mayor);
    
     
    return (EXIT_SUCCESS);
}

