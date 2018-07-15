/* Write a program to print the follwing pattern 

ABCDE
ABCD
ABC
AB
A

*/

#include<stdio.h>

void main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",j+65); // 65 -> ASCII OF 'A'
        }
        printf("\n");
    }
}