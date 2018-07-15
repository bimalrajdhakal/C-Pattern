/* Write a progarm to print the following pattern 



    1
   22
  333
 4444
55555

*/


#include<stdio.h>

void main()
{
    int z=1;
    int n=5; // size
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=z;k++){
            printf("%d",i);
        }
        z++;
        printf("\n");
    }
}