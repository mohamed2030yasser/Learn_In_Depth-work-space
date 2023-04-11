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

/*      output
0123456789
123456789
23456789
3456789
456789
56789
6789
789
89
9

*/
