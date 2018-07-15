/* Write a program to print following pattern 

*****
 ****
  ***
   **
    *
    
*/

#include<stdio.h>

void main()
{
    int z=5;  // max stars 
    int n=5;  // size
    int i,j,k;

    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=1;k<=z;k++){
            printf("*");
        }
        z--;
        printf("\n");
    }

}

