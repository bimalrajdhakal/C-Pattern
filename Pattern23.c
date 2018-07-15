/* Write a progarm to print following pattern

EDCBA
EDCB
EDC
ED
E

*/

#include<stdio.h>

void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("%c",j+65); // 65 --> ASCII of 'A'
        }
        printf("\n");
    }
}