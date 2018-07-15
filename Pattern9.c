/* write a program to print following pattern

EDCBA
EDCBA
EDCBA
EDCBA
EDCBA

*/

#include<stdio.h>

void main()
{
    char i,j;

    for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}