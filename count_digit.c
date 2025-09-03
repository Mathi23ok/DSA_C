
#include <stdio.h>

int main() {
    int n;
    int a;
    printf("Enter the number :");
    scanf("%d",&n);
    int s = 0;
    
    
    while(n>0){
        a = n%10;
        n = n/10;
        s++;
    }
        printf("The total digits in number is %d",s);
    }
