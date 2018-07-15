/* Write  a program to print following pattern 


55555
 4444
  333
   22
    1

    */

   #include<stdio.h>

   void main(){
       int z=5;
       int n=5;  // size
       int i,j,k;
       for(i=n;i>=1;i--){
           for(j=n;j>i;j--){
               printf(" ");
           }
           for(k=1;k<=z;k++){
               printf("%d",i);
           }
           z--;
           printf("\n");
       }
   }