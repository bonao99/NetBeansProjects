/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 21, 2019, 9:15 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    char text[255];
    int count = 0;
    printf("Enter texto : ");
    fgets(text, 255, stdin);
    
    for(int i= 0; i <= 254; i++)
    {
       if (text[i] == ' ')
           text[i] = '*';
 
    }
    
    printf("\n Texto convertido :%s", text);
    return (EXIT_SUCCESS);
}

