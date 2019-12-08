/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 16, 2019, 9:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
      int x=0;
    int y=0;

    for(int i=0;i<100;i++)
    {
        x = i + 1;
        if(x>y)
        y=x;
       
    }
    
     printf("The biggest number is:%d \n",y );

    return (EXIT_SUCCESS);
}

