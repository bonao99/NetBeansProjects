/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 30, 2019, 4:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void output(int array[], int h)
{
    
    for(int i=0; i < h; i++)
    {
        printf("%d   ",array[i]);
    }
    
}

void bubblefunc(int array[], int x)
{

    for(int i=0; i <= x; i++)
    {
        for(int j=0; j <= x-1; j++)
        {
            if (array[j] > array[j+1])
            {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            
            }
        }
    }

}

int main(int argc, char** argv) 
{
    int arraydata[] = {34, 56, 21, 4, 6, 78, 5, 58};
     
    int h = sizeof(arraydata)/sizeof(arraydata[0]);
     for(int arr=0;arr <= h; arr++)
     
       printf("-%d ",arraydata[arr]);

    bubblefunc(arraydata, h);
    
    printf("\n\nsorted Array:");
    output(arraydata, h);
    printf("\n\n");

    return (EXIT_SUCCESS);
}

