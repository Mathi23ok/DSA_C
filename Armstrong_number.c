
#include <stdio.h>
#include <math.h>

int main() {
    
    int n,d;
    int c = 0;
    int s = 0;
    printf("Enter a number :");
    scanf("%d",&n);
    int org;
    org = n;
    while(n>0){
        n = n/10;
        c++;
    }
    n = org;
    while(n>0){
        d = n%10;
        s += pow(d,c);
        n = n/10;
    }
    if(s==org){
        printf("Its an Armstrong Number ");
    }else{
        printf("Its not an Armstrong Number ");
    }

}
