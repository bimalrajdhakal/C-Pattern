/* Write a progarm to print following pattern 

EEEEE
DDDD
CCC
BB
A

*/

#include<stdio.h>

void main(){
    int i,j;
    for(i=4;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("%c",i+65); // 65 --> ASCII of 'A'
        }
        printf("\n");
    }
}