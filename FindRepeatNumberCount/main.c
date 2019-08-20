/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 19, 2019, 7:17 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[500];
    int count = 0; 
    for(int x = 0; x <= 499;x ++)
    {
        arr[x] = rand() % 10 +1;
      
    }
   for(int outer;outer <= 499;outer ++)
   {
       if(arr[outer] == 5)
       {
            count = count + 1;
            
       }
      
   }
     printf("5 se repite %d veces",count);
   
    
   for(int pos = 499;pos > 1;pos --)
    {
        if(arr[pos] == 5)
        {
        printf("\nUltima Pos = %d ",pos);
        printf("array value = %d\n",arr[pos]);
        break; 
        }
     
   }
     
    return (EXIT_SUCCESS);
}