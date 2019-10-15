/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on October 7, 2019, 5:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

double fibo(double n);
/*
 * 
 */
int main(int argc, char** argv) 
{
    double n;
    double res;
    printf("Enter number to generate Fibo ");
    scanf("%lf",&n);

    res = fibo(n);
    printf("Fibo = %lf\n",res);
    

    return (EXIT_SUCCESS);
}

double fibo(double n)
{
if (n == 0)
{
    return 0;
    
}    else if (n == 1)
{
 return 1;   
}
else if (n > 1)
{
    return fibo(n -1) + fibo(n -2);
} else
{
    return -1;
}
}
