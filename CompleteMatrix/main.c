/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on September 7, 2019, 4:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[5][5];
    int res = 5;
    
    for(int i =0; i <= 4;i++)
        for(int j=0;j <=4;j ++)
            arr[i][j] = 0;
    
    for(int row = 0;row <= 4;row ++)
    {
        res = 5;
        for(int col = 0;col <= row;col ++)
        {
            
            arr [row][col] = res;
            res = res + 5;
            
    }
    }
    
    for(int printout = 0;printout <= 4;printout ++)
    {
        for(int printinn = 0;printinn <= 4;printinn ++)
        {
            printf("%d ",arr[printout][printinn]);
            if(printinn == 4)
                printf("\n");
        }
            
    }
        
    return (EXIT_SUCCESS);
}

