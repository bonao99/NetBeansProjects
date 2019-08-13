/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 9, 2019, 6:40 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    for(int i = 0; i <= 99; i++)
        
        printf("%d- %d\n",i,i%2);
    
    return (EXIT_SUCCESS);
}

