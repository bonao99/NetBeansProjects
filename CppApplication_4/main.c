/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on September 2, 2019, 8:46 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    char str[100];
    
    printf("\n Entre string :");
    scanf("%s",str);
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        printf(" The ASCII of Char %c = %d \n", str[i], str[i]);
    }
    
    return (EXIT_SUCCESS);
}

