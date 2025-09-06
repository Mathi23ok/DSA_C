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
    int a,b;
    int c = 0;
    printf("Enter the starting number :");
    scanf("%d",&a);
    printf("Enter the ending number :");
    scanf("%d",&b);
    for(int i = a;i<=b;i++){
        if (isprime(i)){
            c++;
        }
    }
    printf("%d",c);
}
