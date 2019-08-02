/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 17, 2019, 7:32 PM
 */
int customFactorial(int f);

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int num;
    int res;
    printf("Enter Number\n");
    scanf("%d",&num);
    res = customFactorial(num);
    
    printf("\nFactorial =  : %d",res);
    return (EXIT_SUCCESS);
}

int customFactorial( int x)
{

int res = x;
        for (int i = x-1; i >= 2; i--)
        {
            
            res = res * i;
            
        }
return (res);
    
}