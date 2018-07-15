/* write a program to print following pattern

EEEEE
DDDDD
CCCCC
BBBBB
AAAAA

*/

#include<stdio.h>

void main()
{
    char i,j;
    for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}