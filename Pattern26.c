/* Write a program to print following pattern


    1
   12
  123
 1234
12345

*/

#include<stdio.h>

void main()
{
    int z=1;
    int n=5; //size
    int i,j,k;

    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=z;k++){
            printf("%d",k);
        }
        z++;
        printf("\n");
    }
}
