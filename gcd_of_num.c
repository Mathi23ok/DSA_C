
#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    printf("Enter a number 'a' :");
    scanf("%d",&a);
    printf("Enter a number 'b' :");
    scanf("%d",&b);
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a==0){
        printf("%d",b);
        
    }else{
        printf("%d",a);
    }
}
