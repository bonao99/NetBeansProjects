/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tony
 *
 * Created on July 13, 2019, 7:24 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int SimpleMath (int oper, int num1, int num2);

int main(int argc, char** argv)
{
    int op, n1, n2;
     printf("\n Introduzca Oper : ");
    scanf("%d",&op);
    printf("\n Introduzca num 1 : ");
    scanf("%d",&n1);
    printf("\n Introduzca num 2 : ");
    scanf("%d",&n2);
    int res = SimpleMath(op, n1, n2);
    
    printf("%d",res);

    return (EXIT_SUCCESS);
}

int SimpleMath (int oper, int num1, int num2)
{
    switch(oper) 
    {
        case 1:
            return num1 + num2;
            break;
            
        case 2:
            return num1 - num2;
            break;
            
        case 3:
            return num1 / num2;
            break;
            
        case 4:
            return num1 * num2;
            break;
                
          
    }

}
