/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 9, 2019, 6:55 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    int array100[100];
    for(int i =0; i <= 99;i++)
    {
        array100[i]= i + 1;
        printf("%d\n",array100[i] % 2);
    }
    
    return (EXIT_SUCCESS);
}

