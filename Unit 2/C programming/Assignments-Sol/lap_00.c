/*
 * main.c
 *
 *  Created on: Apr 11, 2023
 *      Author: mayasser
 */
#include <stdio.h>

void main(void)
{
    char i, j, row=0;
    
    for ( i = 0; i < 10; i++)
    {
        for ( j = row; j < 10; j++)
        {
            printf("%d",j);
        }
        row++;
        printf("\n");
        
    }
    

}


