/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 10, 2019, 6:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
int poder(int a, int b);

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[1000];
    
    for(int row=0;row <= 999;row++)
    {
    arr[row] = poder(row,3);
    printf("%d\n",arr[row]);
    }
    
    return (EXIT_SUCCESS);
}

int poder(int a, int b)
{
    int temp = a;
    for(int i = 2; i <= b; i++)
    {
        
        temp = temp * a;
        
    }
    return temp;
}
