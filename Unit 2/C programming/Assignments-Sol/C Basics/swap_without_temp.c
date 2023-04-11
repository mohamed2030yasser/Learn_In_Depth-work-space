/*
 * main.c
 *
 *  Created on: Apr 11, 2023
 *      Author: mayasser
 */
#include <stdio.h>

void main(void)
{
    char x=5, y=10;
    y = x^y;
    x= y^x; // >> (x^y)^x >> y
    y=y^x; // >> (x^y)^Y >> x
    printf("x=%d\ty=%d", x, y);

}

/*      output
x=10    y=5
*/
