// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
       for(int j = 0;j<n;j++){
           printf("* ");
       }
       printf("\n");
    }
}
