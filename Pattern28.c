/* Write a program to print following pattern 

    A
   AB
  ABC
 ABCD
ABCDE

*/


#include<stdio.h>

void main()
{
    int z=1;
    int n=5;  //size
    int i,j,k;

    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            printf(" ");
        }
        for(k=0;k<z;k++){
            printf("%c",k+65);   // 65 ASCII of 'A'
        }
        z++;
        printf("\n");
    }
}