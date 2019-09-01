/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 31, 2019, 4:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void  articulosfunc();
        float tax;
        int qty;
        float price;
        float total;
  
  
int main(int argc, char** argv)
{

        char answer ='N';
        int count = 0;
        
        do
        {
         count = count + 1;
         articulosfunc();
         total = qty * price;
         tax = total * 0.0714;
         
         printf("No.\t QTY \t \t Price\tTotal\n");
         printf("%d  %d  %f  %f",count,qty,price,total);
         
        printf("Es este el ultimo articulo Y/N?\n");
        scanf("%c",&answer);
           
        }while (answer != 'N'); 

   
    return (EXIT_SUCCESS);
}

void articulosfunc()
{
  
        printf("\n\nEntre precio\n"); 
        scanf("%f",&price);  
        printf("Entre qty\n"); 
        scanf("%d",&qty);
   
               

}