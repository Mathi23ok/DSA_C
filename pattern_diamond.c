// Online C compiler to run C program online
#include <stdio.h>

int main() {

   
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   //1st half pattern
   for(int i = 0;i<n;i++){
       //for space
       for(int j = 0;j<n-1-i;j++){
           printf(" ");
       }
       //for star
        for(int j = 0;j<2*i+1;j++){
           printf("*");
       }
        for(int j = 0;j<n-1-i;j++){
           printf(" ");
       }
       printf("\n");
   }
   //2nd half pattern
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
