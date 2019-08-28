/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 27, 2019, 5:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void printarrayfunc(int arrprint[5][5]);

int main(int argc, char** argv)
{
    int arr[5][5];
    int count = 0;
    int n = 3;
    int scol = 4;
    int srow;
    int col = 0;
    int row = 0;
    int arrprint = 0;
    
    for(int row = 0;row <= 4;row ++)
    {
        
        for(int col = 0;col  <= 4;col  ++)
        {
            arr[row][col] = rand() % 99 +1;
    
        }
    }
    printarrayfunc(arr);
       
    for(int outer = 0; outer <= 4; outer ++)
    {
       
        for(int inner = 0;inner <= n; inner ++)
        {
            srow = inner + 1 + outer;
            int temp = arr[outer][inner];
            arr[outer][inner] = arr[srow][scol];
            arr[srow][scol] = temp;
            
        }
        n = n - 1;
        scol = scol - 1;
    }
    
    printf("\n\n");
    
  printarrayfunc(arr);
        
    return (EXIT_SUCCESS);
}


void printarrayfunc(int arrprint[5][5])
{
    int count = 0;
       for(int printinn=0;printinn <=  4; printinn++)
    {
        
        for(int printout =0; printout <=  4;printout++)
        {
             count = count + 1;
                          
            if (printout == 5)
            {
                printf("\n");
            }
            else
            {
               printf("%d ",arrprint[printinn][printout]);
            }
         
        }
        printf("\n");
    }  
}