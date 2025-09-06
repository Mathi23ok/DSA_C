#include <stdio.h>
#include <stdbool.h>
bool isprime(int n){
    if (n<2) return false;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
          return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if (isprime(i)){
            printf("%d ",i);
        }
    }
    
}
