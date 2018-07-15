/* Write a progarm to print following pattern 

54321
5432
543
54
5

*/

#include<stdio.h>

void main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}