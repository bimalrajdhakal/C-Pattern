/* Write a program to print following pattern 

AAAAA
BBBB
CCC
DD
E

*/

#include<stdio.h>

void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf("%c",i+65);
        }
        printf("\n");
    }
}