#include <stdio.h>
#include <stdbool.h>
bool isprime(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
          return false;
        }
    }
    return true;
}
void factor(int n){
    for(int i = 2;i<=n;i++){
        if(n%i == 0 && isprime(i)){
                printf("%d ",i);
            }
    }
}

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    factor(n);
    
}
