/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 10, 2019, 7:20 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[100];
   
    for(int val =0; val <= 99; val ++)
    {
        arr[val] = rand() % 10;
    }
    
    for(int row= 0;row <= 99; row++)
    {
        int count = 0;
        for(int inner =0;inner <= 99; inner ++)
        {
            if(arr[row] == arr[inner] && row != inner)
                count = count + 1;
            
        }
        printf("\nElemento de posicion %d Con Valor de %d se repite %d Veces ",row,arr[row],count);
    }
    
    return (EXIT_SUCCESS);
}

