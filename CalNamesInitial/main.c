/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on August 7, 2019, 5:16 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *  * 1- Definir arrays para iniciales nombres, array nombres, arrayCalificaciones
 * 2- Llennar nombres y calificaciones
 * 3- Si la primera inicial comienza con la i todas las calificaciones son igual 0
 * 
 * 1- generar init rand 2
 * 2- si init = i cal =0, else generar cal rand 1-100
 * 3-
 * 
 * 
 */
int main(int argc, char** argv)
{

   int arrinit[] = {'a','b','c','d','e','f','g','h','i','j','k','m','n','l','o','p','q','r','s','t','u','v','w','x','y','z'};
   
   int arryname[100][2];
   int aarcalif[100][3];
   
   
   for(int row=0; row <= 99; row++)
   {
       
       arryname[row][0] = arrinit[rand() % 26];
       arryname[row][1] = arrinit[rand() % 26];
       if(arryname[row][0] == 'i')
       {
       aarcalif[row][0] = 0;
       aarcalif[row][1] = 0;
       aarcalif[row][2] = 0;
       }
       else 
       {
       aarcalif[row][0] = rand() % 100 + 1;
       aarcalif[row][1] = rand() % 100 + 1;
       aarcalif[row][2] = rand() % 100 + 1;
           
       }
       
   }
   for(int printout=0;printout <= 99; printout ++)
   {
     printf("Name %c\n",arryname[printout][0]);
     printf("LastName %c\n",arryname[printout][1]);
     printf("Cal %d\n",aarcalif[printout][0]);
     printf("Cal %d\n",aarcalif[printout][1]);
     printf("Cal %d\n",aarcalif[printout][2]);
   }
     
    return (EXIT_SUCCESS);
}

