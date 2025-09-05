#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int c = 0;
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){
            c++;
            if((n%i)!= i){
                c++;
            }
        }
    }
    if(c==2){
        printf("Its a Prime Number ");
    }else{
        printf("Its not a Prime Number ");
    }

}
