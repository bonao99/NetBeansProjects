/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user1
 *
 * Created on August 19, 2019, 8:26 PM
 */

#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    char again;
 
    do {
 
        int fr, cls, choice, fr2cls, cls2fr;
        printf("TEMPERATURE CONVERTER\n\n\n");
        printf("Choose to proceed\n\n");
        printf("1. Fahrenheit to Celsius converter\n");
        printf("2. Celsius to Fahrenheit to converter\n");
 
        scanf("%d", &choice);
        if(choice == 1){
            printf("\nEnter the degrees in Fahrenheit\n");
            scanf("%d", &fr);
 
            fr2cls = 5 * (fr-32) / 9;
 
            printf("\n%d Fahrenheit is %d Celsius\n\n", fr, fr2cls);
        }
         
        else if(choice == 2){
            printf("\nEnter the degrees in Celsius\n");
            scanf("%d", &cls);
 
            cls2fr = ((cls * 9) / 5) + 32;
 
            printf("\n%d Celsius is %d Fehrenheit\n\n", cls, cls2fr);
        }
         
        else {
             printf("\n\nWRONG CHOICE\n");
             printf("TRY AGAIN\n\n");
        }
 
        printf("Press Y to do it again or any other key to quit\n");
        getchar();
        again = getchar();
         
        system ( "cls" );
 
    } while ((again == 'y') || (again == 'Y'));
 
}
