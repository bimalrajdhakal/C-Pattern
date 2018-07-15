/* Write a program to print following pattern 


    *
   ***
  *****
 *******
*********
  


*/


#include<stdio.h>

void main()
{
    int min_stars=1;

    /*
    change value of min_stars to set min no. of stars in pyramid 

    take odd no. for odd no of stars in each row 1-3-5 etc

    take even no for even no. stars in each row 2-4-6 etc 
 
    */

   int p_height=5;
   // change value to increase or decrease the size of pyramid 

   int p_space=p_height-1;
   int i,j,k;

   for(i=0;i<p_height;i++){
       for(j=p_space;j>i;j--){
           printf(" ");
       }
       for(k=0;k<min_stars;k++){
           printf("*");
       }
       min_stars+=2;
       printf("\n");
   }
}