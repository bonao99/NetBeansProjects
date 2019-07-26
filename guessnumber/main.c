/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 18, 2019, 11:30 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    int i,res, num, gnum;
        gnum = 10;
        
        
        for (i = 0; i < gnum; i++)
        {

            printf("\n%d", rand() % 10);
        }
    return (EXIT_SUCCESS);
}

