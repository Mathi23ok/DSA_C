
#include <stdio.h>

int main() {

   
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   for(int i = 0;i<n;i++){
      
       //for space
       for(int j = 0;j<i;j++){
           printf(" ");
       }
             //for star
        for(int j = 0;j<2*n-(2*i+1);j++){
           printf("*");
       }
       //for space
        for(int j = 0;j<i;j++){
           printf(" ");
       }
  
       printf("\n");
   }

}
/*
Enter the number :5
*********
 ******* 
  *****  
   ***   
    * 
*/
