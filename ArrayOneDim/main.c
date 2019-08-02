/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 1, 2019, 8:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arrayone[5] = {10,20,30,40,50};
    printf("\n");
    for(int i=0; i < 5; i++)
    {
        printf("Array One arrayone[%d] is %d \n",i,arrayone[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

