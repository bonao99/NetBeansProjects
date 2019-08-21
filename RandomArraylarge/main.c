/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 16, 2019, 7:20 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int arr[100000];
    int temp = 0;
    printf("\n");
    for(int i = 0;i <= 99999;i ++)
    {
        arr[i] = rand() % 100000 + 1;
    }
    
    for(int x = 0;x <= 2;x ++)
    {
        printf("%d- \n",arr[0]);
                        
    }
    
      printf("\n");
      
    for(int j=0;j <= 99999;j ++)
    {
    if(arr[0] > arr[j])
    {
        arr[0] = arr[j];
         
    }
    
    }
    printf("%d\n",arr[0]);
    
    return (EXIT_SUCCESS);
}

