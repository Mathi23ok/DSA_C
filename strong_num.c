#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact = 1,sum = 0,num = n;
    while(n>0){
        int d = n%10;
        for(int i = 1;i<=d;i++){
            fact *= i;
        }
        sum += fact;
        fact = 1;
        n /= 10;
    }
    if(sum == num){
        printf("Strong Number");    
    }else{
        printf("Not a Strong Number");
    }
}
