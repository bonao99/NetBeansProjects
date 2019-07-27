/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 26, 2019, 8:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int num[100];
    int i,temp;
    
    for(i=0; i<=99; i++)
    {
        
        num[i] = i +1;
        printf("num[%d]\n", num[i]);
    }
    return (EXIT_SUCCESS);
}

