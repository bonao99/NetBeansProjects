/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on September 7, 2019, 6:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[4][2];
    
    int vector1[8];
    
    int temp = 0;
    for(int i=0;i <= 3;i ++)
    {
        for(int j=0;j <= 1;j ++)
        {
            
            temp = temp + 1;
            arr[i][j] = temp;
            
        //printf("%d\n",arr[i][j]);
        }
    }
    
    temp = 0;
    for(int col=0;col <= 1;col ++)
    {
            
        for(int row = 0;row <= 3;row ++)
        {
               
            vector1[temp] = arr[row][col];
            printf("%d ",vector1[temp]);
            temp = temp + 1;
            
            
        }
    
    }

    return (EXIT_SUCCESS);
}

