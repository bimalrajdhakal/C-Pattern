/* Write a progarm to print folowing pattern 



    1
   222
  33333
 4444444
555555555

*/

#include<stdio.h>

void main(){
    int n=5; // size
    int z=1;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=0;k<z;k++){
            printf("%d",i);
        }
        z+=2;
        printf("\n");
    }
}