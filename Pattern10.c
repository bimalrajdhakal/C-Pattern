/* write a program to print the following pattern 

*
**
***
****
*****

*/

#include<stdio.h>

void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");  // put any character
        }
        printf("\n");
    }
}