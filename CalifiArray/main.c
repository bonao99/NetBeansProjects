/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 1, 2019, 10:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*  
1 main 
2 init array [10][4]
3 llenar array posiciones
    3.1 cal avg ponerlo en pos 4 de cada est
4 print values
5 exit main
 */
int main(int argc, char** argv)
{
    int arrayestudiantes[10][4];
    int avg = 0;
    for(int row = 0; row <= 9; row++)
    {
        avg = 0;
        for(int col = 0; col <= 2; col++)
        {
            arrayestudiantes[row][col] = rand() % 100;
            avg = avg + arrayestudiantes[row][col];
        }
        avg = avg/3;
        arrayestudiantes[row][3] = avg;
    }
    
    for(int printout =0;printout <= 9; printout++ )
    {
        printf("\nEst %d Cal %d-%d-%d  AVG :%d\n",printout + 1,arrayestudiantes[printout][0],arrayestudiantes[printout][1],arrayestudiantes[printout][2] ,arrayestudiantes[printout][3]);
    }

          
    return (EXIT_SUCCESS);
}

