/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 26, 2019, 9:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[5][5];
    int count = 0;
    for(int row = 0;row <= 4;row ++)
    {
        
        for(int col = 0;col  <= 4;col  ++)
        {
            arr[row][col] = rand() % 99 +1;
    
        }
    }
    
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
               printf("%d ",arr[printinn][printout]);
            }
           
              
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

