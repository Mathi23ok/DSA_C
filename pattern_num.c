
#include <stdio.h>
int main() {
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   int s = 2*(n-1);
   for(int i = 1;i<=n;i++){
       //for numbers
       for(int j = 1;j<=i;j++){
           printf("%d",j);
       }
       //for space 
       for(int j = 1;j<=s;j++){
           printf(" ");
       }
       //for numbers
         for(int j = i;j>=1;j--){
           printf("%d",j);
       }
       printf("\n");
          s = s-2;//reduce the space by 2
   }
}
/*
Enter the number :5
1        1
12      21
123    321
1234  4321
1234554321
*/
