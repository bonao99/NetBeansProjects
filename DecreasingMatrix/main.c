/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on September 6, 2019, 8:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Reverse integer
 * 
 */
int reverse(int x);

int main(int argc, char** argv) 

{
    int num;
    
    printf("Enter num ");
    scanf("%d",&num);
    printf("\nNum = %d",reverse(num));
    
    return (EXIT_SUCCESS);
}

int reverse(int x)
{

    int res = 0;
    int pop = 0;
    int  maxint = 2147483649;
    int  minint = -2147483648;
                    
    while(x != 0);
    {
        pop = x % 10;              
        x = x / 10;
        res = (res * 10) + pop;
    }

if(res < minint || res >  maxint)
        
{
    return 0;
}

else 
{
    return res;
}
    
}
