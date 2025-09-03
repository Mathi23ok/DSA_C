
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int s = 0;
    int r = n;
    
    while(n>0){
        s = s*10+n%10;
        n = n/10;
    }
    if(s==r){
        printf("Its palindrome ");
    }else{
        printf("Its not palindrome ");
    }

    return 0;
}
