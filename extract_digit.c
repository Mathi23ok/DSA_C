#include <stdio.h>

int main() {
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Extraction of digits: ");
    while(n>0){
        printf("%d   ",n%10);
        n = n/10;
    }
}
