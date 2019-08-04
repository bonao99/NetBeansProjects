/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 1, 2019, 10:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

/* Print each line for est y cal
 *  add [10][4] ultima pos = avg de cal
 * 
 * print all
 */
int main(int argc, char** argv)
{

    int estarray[10][4];
    int correcal;
    int correrest;
    int avg;
    for(correrest = 0; correrest <= 9; correrest++)
    {
        avg = 0;
        for(correcal = 0;correcal <= 2; correcal++)
        {
       
            estarray[correrest][correcal]= rand() % 100; 
            avg = avg + estarray[correrest][correcal];
      
        }
          estarray[correrest][3]  = avg;
          
         
    

          for(int row=0;row<= 9; row++)
          {
              for(int cal=0; cal <= 3;cal++)
              {
                  printf("EST es: %d\n",estarray[row][cal]);
                  
              }
          }
           printf("AVG ES :%d",estarray[correrest][3]);
    }
          
    return (EXIT_SUCCESS);
}

