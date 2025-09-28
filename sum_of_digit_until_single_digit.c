
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    //one line formula:
    printf("%d",1 + (n-1)%9);
    //loop method
    while(n>0 || sum>9){
        if(n==0){
            n = sum;
            sum = 0;
        }
        int d = n%10;
        sum += d;
        n = n/10;
        
    }
    printf("\n%d",sum);

    return 0;
}
