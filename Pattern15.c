/* Write a progarm to print the following pattern

*****
****
***
**
*


*/

#include<stdio.h>

void main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");     // put any character 
        }
        printf("\n");
    }
}