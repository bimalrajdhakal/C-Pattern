/* write a program to print following pattern 

12345
 1234
  123
   12
    1


    */

   #include<stdio.h>

   void main(){
       int z=5;
       int n=5; //size
       int i,j,k;
       for(i=1;i<=n;i++){
           for(j=1;j<i;j++){
               printf(" ");
           }
           for(k=1;k<=z;k++){
               printf("%d",k);
           }
           z--;
           printf("\n");
       }
   }