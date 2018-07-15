/* write a program to print following pattern

55555
44444
33333
22222
11111

*/

#include<stdio.h>

void main()
{
    int i,j;

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}