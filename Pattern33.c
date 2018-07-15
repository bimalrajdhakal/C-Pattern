/* Write  a program to print following pattern 

ABCDE
 ABCD
  ABC
   AB
    A

    */

   #include<stdio.h>

   void main(){
       int z=5;
       int n=5; // size
       int i,j,k;

       for(i=1;i<=n;i++){
           for(j=1;j<i;j++){
               printf(" ");
           }
           for(k=0;k<z;k++){
               printf("%c",k+65); // ASCII of 'A'
           }
           z--;
           printf("\n");
       }
   }