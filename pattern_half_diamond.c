
#include <stdio.h>

int main() {

   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   for(int i = 0;i<n;i++){
      //1st half diamond
       //for star
       for(int j = 0;j<i+1;j++){
           printf("*");
       }
       
       //for space
        for(int j = 0;j<n-i-1;j++){
           printf(" ");
       }
       printf("\n");
   }
   //2nd half diamond
    for(int i = 0 ;i<n;i++){
         for(int j = 0;j<n-(i+1);j++){
           printf("*");
       }
       
       printf("\n");
   }
   }
/*

Enter the number :5
*    
**   
***  
**** 
*****
****
***
**
*

*/
