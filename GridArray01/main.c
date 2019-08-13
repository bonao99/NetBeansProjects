/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 9, 2019, 7:39 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    int arr[15][15];
    for(int row=0;row <= 14;row++)
    {
        printf("\n");
        for(int col = 0; col <= 14;col ++)
        {
     
            
            if(row + col == 14)
            {
                arr[row][col] = 1;
            }
         
            else {
              arr[row][col] = 0;
            }
            printf("\t%d", arr[row][col]);
            
        }
               
    }
     
    return (EXIT_SUCCESS);
}

