/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 13, 2019, 6:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */



int main(int argc, char** argv) {
    
        char entra;
    
    system("clear");
    while (entra < 48 || entra > 50 )
    {
        printf("\n Entre un charater  ");
        scanf(" %c", &entra);
        
    }
    switch(entra)
    {
        case '0' :
            printf("\n Introdujo 0");
            break;
            
               case 49 :
            printf("\n Introdujo 1");
         
            
            break;
                      
            case 50 :
            printf("\n Introdujo 2");
            break;
    }

    return (EXIT_SUCCESS);
}

