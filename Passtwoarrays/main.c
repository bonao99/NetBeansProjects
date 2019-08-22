/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 21, 2019, 9:36 PM
 */

#include <stdio.h>
#include <stdlib.h>

/* Convierte array to matrix organizada for filas
 * y colummnas
 */
int main(int argc, char** argv)
{
    int vector1[9];
    int mat1[3][3];
    int mat2[3][3];
    int row = 0, col = 0;
    
    for(int i =0;i <= 8;i++)
    {
        vector1[i] = rand() % 100;
        printf("%d-",vector1[i]);
    }
    printf("\n");
    for(int j = 0;j <= 8;j ++)
    {
     mat1[row][col] = vector1[j];
     col = col + 1;
     if(col == 3)
     {
         row = row + 1;
         col = 0 ;
     }     
    }
    for(row = 0;row <= 2;row ++)
    {
       for(col = 0;col <= 2;col ++) 
       {
           printf("%d-",mat1[row][col]);
       }
       printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

