
#include <stdio.h>

int main() {
    
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
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
}
/*
Enter the number :5
    *    
   ***   
  *****  
 ******* 
*********
*/
