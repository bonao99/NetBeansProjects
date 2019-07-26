/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 17, 2019, 10:07 PM
 */
float custompower(float a, float b);

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 

{

    printf("%f",custompower(10,6));
    
    return (EXIT_SUCCESS);
}

float custompower(float a, float b)
{
    float res = a;
    for(int i = 1; i <= b; i++)
    {
        res = res * a;
    }
    return(res);

}
