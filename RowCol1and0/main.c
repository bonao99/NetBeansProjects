/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 10, 2019, 5:53 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[7][5];
    
    for(int row=0;row <= 6;row++)
    {
        printf("\n");
        for(int col=0;col <= 4;col++)
        {
            if(col % 2 == 0 || row % 2 == 0)
            {
                arr[row][col] = 1;
            }
            else 
            {
             arr[row][col] = 0;
            }
            printf("\t%d",arr[row][col]);
        }
    }
    return (EXIT_SUCCESS);
}

