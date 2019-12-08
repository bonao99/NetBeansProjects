/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 5, 2019, 9:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    int arr [5] = {10, 20, 60, 120, 45};
    int i;
    int large = arr[0];
    
    for(i =0; i <= 4; i++)
    {
        if( arr[i] > large)
            large = arr[i];
    }
    printf("%d",large);
    
    return (EXIT_SUCCESS);
}

