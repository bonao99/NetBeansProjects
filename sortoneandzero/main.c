/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 15, 2019, 10:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[] = {1,0,0,1,1,0,1,0,0,1};
    int large;
    for(int outer=0;outer <= 9;outer++)
    {
        for(int inner=0;inner <= 8;inner ++)
        {
            if(arr[inner] > arr[inner +1])
            {
                int temp = arr[inner];
                arr[inner] = arr[inner +1];
                arr[inner +1] = temp;                
                
            }
            
        }

     
    }
    for(int out=0;out <= 9;out ++)
        {
            printf("%d",arr[out]);
        }    
       printf("\n");
    return (EXIT_SUCCESS);
}

