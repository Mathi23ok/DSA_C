#include <stdio.h>
int main() {
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   char c = 'A';
   for(int i = 0;i<n;i++){
       for(char j = 0;j<=i;j++){
           printf("%c ",c);
           
       }
       c = c+1;
        printf("\n");
   }
   }

/*

Enter the number :5
A 
B B 
C C C 
D D D D 
E E E E E 

*/
