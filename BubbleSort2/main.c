/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 6, 2019, 11:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * bubble sort array sample
 * 
 */
int bubblesort(int data); 

int main(int argc, char** argv) 
{
    int data [] ={2, 25, 4, 78, 96, 45, 0, 11, 459, 9};
    int h = sizeof(data)/sizeof(data[0]);
    printf("\n%d\n",h);
    
    for(int i=0; i <= h; i++)
    {
        for(int j=0; j <= h-1 -1; j++)
        {
            if (data[j] < data[j+1])
            {
                data[j] = data[j+1];
                data[j+1] = data[j];
                
            }
          
        }
           
    }
    for(int x=0;x <=9;x++)
    {
          printf("%d ",data[x]);
    }


    return (EXIT_SUCCESS);
}


