/* Write  a program to print following pattern 

EEEEE
 DDDD
  CCC
   BB
    A

    */

   #include<stdio.h>

   void main(){
       int z=5;
       int n=5; // size
       int i,j,k;
       for(i=n-1;i>=0;i--){
           for(j=n-1;j>i;j--){
               printf(" ");
           }
           for(k=0;k<z;k++){
               printf("%c",i+65);  // ASCII of 'A'
           }
           z--;
           printf("\n");
       }

   }