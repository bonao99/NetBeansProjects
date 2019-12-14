/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 19, 2019, 9:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    int arr[500];
    int arrmat[10][2];
    int rowpos = 0;
    
    for(int x=0;x <= 499;x ++)
    {
        arr[x] = rand() % 100 +1;
        
    }
    for(int currentvalue=0;currentvalue <= 499;currentvalue ++)
    {
        if(arr[currentvalue] % 3 == 0)
        {
            arrmat[rowpos][1] = arr[currentvalue];
            arrmat[rowpos][0] = currentvalue;
            rowpos = rowpos + 1;
            if(rowpos > 9)
                break;
        }
        
        
    }
    
    for(int printout=0; printout <= 9;printout ++)
    {
        printf("Pos : %d Valor : %d\n",arrmat[printout][0],arrmat[printout][1]);
        
    }
        
    return (EXIT_SUCCESS);
}

