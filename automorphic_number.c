#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m = n*n,dig = 0,num = n;
    while(n>0){
        int d = n%10;
        dig++;
        n /= 10;
    }
    
    if(num%(dig*10) == m%(dig*10)){
        printf("Automorphic Number");    
    }else{
        printf("Not an Automorphic Number");
    }
    
}
