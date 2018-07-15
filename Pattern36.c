/* Write a program to print following pattern 



    1
   333
  55555
 7777777
999999999

*/

#include<stdio.h>

void main(){
    int n=5; //size
    int z=1;
    int i,j,k;

    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=z;k++){
            printf("%d",z);
        }
        z+=2;
        printf("\n");
    }
}