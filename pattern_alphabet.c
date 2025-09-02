#include <stdio.h>
int main() {
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   
   for(int i = 0;i<n;i++){
       for(char j = 'A';j<='A'+i;j++){
           printf("%c ",j);
           
       }
        printf("\n");
   }
   }
/*
Enter the number :5
A 
A B 
A B C 
A B C D 
A B C D E 
*/
