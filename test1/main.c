/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 28, 2019, 5:36 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int a = 40;
    int b = 80;
    
    int temp;
    printf("Values before \tA : %d B : %d\n\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("Values after swap A : %d B : %d\n",a,b);
    
    
    
    return (EXIT_SUCCESS);
}

