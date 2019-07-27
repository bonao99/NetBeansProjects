/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 26, 2019, 8:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int num[100];
    int i,temp, avg = 0;
    int count = 0 ;
 
    
    for(i=1; i<=100; i++)
    {
        
        num[i-1] = i * 5; 
       avg = avg + num[i-1];     
    }
    printf("[");
    
    
    for (int j=99; j >=0;j--)
    {
        count = count + 1;
        if(j==0)
        printf("%d",num[j]);
        else
        printf("%d,",num[j]);
        if (count == 10)
            
        {           
                  printf("\n"); 
                  count = 0;
        }
     
        
    }
    
     printf("]\n");
     printf("\nAVERAGE : %d",avg/100);
          
    return (EXIT_SUCCESS);
}

