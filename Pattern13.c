/* Write a progarm to print the following pattern 

A
BB
CCC
DDDD
EEEEE

*/


#include<stdio.h>

void main()
{
    char i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}