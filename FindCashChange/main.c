/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 24, 2019, 6:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int B100 =0, B50 =0, B20 =0, B10 =0, B5 =0, B1 =0;
    int CANTAPAGAR, CANTPAGADA, DEVEULTO=0;
    int MENUDO = 0;
    
    printf("Entre Monto :\n");
    scanf("%d", &CANTAPAGAR);
    printf("\nEntre Cantidad Pagada :");
    scanf("%d", &CANTPAGADA);
    MENUDO =  CANTPAGADA - CANTAPAGAR;           
    DEVEULTO = CANTPAGADA - CANTAPAGAR;
  
    if (DEVEULTO >= 100)
    {
        B100 = DEVEULTO / 100;
        DEVEULTO = DEVEULTO - (B100 * 100);
    }
    
    if (DEVEULTO >= 50)
    {
        B50 = DEVEULTO / 50;
        DEVEULTO = DEVEULTO - (B50 * 50);
    }
    
   if (DEVEULTO >= 20)
    {
        B20 = DEVEULTO / 20;
        DEVEULTO = DEVEULTO - (B20 * 20);
    }
    
       if (DEVEULTO >= 10)
    {
        B10 = DEVEULTO / 10;
        DEVEULTO = DEVEULTO - (B10 * 10);
    }
    
           if (DEVEULTO >= 5)
    {
        B5 = DEVEULTO / 5;
        DEVEULTO = DEVEULTO - (B5 * 5);
 
    }
    
        B1 = DEVEULTO;
       
        if (B100 > 0)
        printf(" Billetes de 100 : %d\n", B100);
        
        if (B50 > 0)
	printf(" Billetes de 50 : %d\n", B50);
        
        if (B20 > 0)
	printf(" Billetes de 20 : %d\n", B20);
        
        if (B10 > 0)
	printf(" Billetes de 10 : %d\n", B10);
        
        if (B5 > 0)
        printf(" Billetes de 5 : %d\n", B5);
        
        if (B1 > 0)
        printf(" Billetes de 1 : %d\n", B1);
        
        
        printf("\nTotal devuelto por caja:%d",MENUDO);
 
    
    return (EXIT_SUCCESS);
}

