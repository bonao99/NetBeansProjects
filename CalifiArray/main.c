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

    int estarray[10][4];
    int correcal;
    int correrest;
    int avg = 0;
    for(correrest = 0; correrest <= 9; correrest++)
    {
        for(correcal = 0;correcal <= 4; correcal++)
        {
       
            estarray[correrest][correcal]= rand() % 100; 
            avg = avg + estarray[correrest][correcal];
                    
            printf("EST %d\n", estarray[correrest][correcal]);
        }
            

    }
    
          avg = (avg + estarray[correrest][correcal]) / correcal;
          printf("\nAVG :%d", avg);
          
    return (EXIT_SUCCESS);
}

