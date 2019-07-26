/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 24, 2019, 8:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    int num, mult, count= 0;
    
    printf("Enter numero\n");
    scanf("%d",&num);
    
 
        
          for(int i=1; i <=num; i++)
            {  
              if (i % 3 == 0)
            {
              count = count + 1;
            }
         
            }
         printf("Count :%d",count);
    
 
    
    return (EXIT_SUCCESS);
}

