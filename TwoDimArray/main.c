/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 1, 2019, 8:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)

{
    int arraytwodime[2][2] = {10, 20, 30, 40};
    printf("\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j=0; j < 2; j++)
        {
            printf("Array Value [%d] [%d] : %d \n", i,j,arraytwodime[i][j]);
        }
    }
    return (EXIT_SUCCESS);
}

