#include <stdio.h>
int main() {
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   
   for(int i = n;i>=0;i--){
       for(char j = 'A';j<'A'+i;j++){
           printf("%c ",j);
           
       }
        printf("\n");
   }
   }
/*

Enter the number :5
A B C D E 
A B C D 
A B C 
A B 
A 

*/
