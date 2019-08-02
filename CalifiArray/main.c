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

/* Print each line for est y cal
 *  add [10][4] ultima pos = avg de cal
 * 
 * print all
 */
int main(int argc, char** argv)
{

    int estarray[10][3];
    for(int correrest = 0; correrest <= 9; correrest++)
    {
        for(int correcal = 0;correcal <= 3; correcal++)
        {
            
            
            estarray[correrest][correcal]= rand() % 100; 
            printf("EST %d", estarray[correrest][correcal]);
        }
            
        
    }
    
    
    return (EXIT_SUCCESS);
}

