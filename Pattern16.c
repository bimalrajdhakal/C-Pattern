/* Write a program to print following pattern 

11111
2222
333
44
5


*/

#include<stdio.h>

void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}