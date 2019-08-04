/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 3, 2019, 9:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

    int equis[5][5];
    int row, col;
    
    for(row=0; row <= 4; row++)
    {
        
        for(col=0; col <= 4; col++)
            
        {
            if(row==2 || col==2)
                equis[row][col]=1;
            
            else
                equis[row][col]=0;
                
            printf("%d-",equis[row][col]);
            
        }
        printf("\n");
    }
    
    
    return (EXIT_SUCCESS);
}


