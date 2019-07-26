/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 15, 2019, 10:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

    int num, res=0;
    printf("\nEntre Numero: ");
    scanf("%d",&num);
    for(int i=1; i <= num; i++)
    {
     
        res = res + i;
        printf("\nres %d ",res);
    }
    printf("\nResultado de loop = %d",res);
 
                
    return (EXIT_SUCCESS);
}

