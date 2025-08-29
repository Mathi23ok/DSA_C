// to find the missing element on the array 1...n
#include <stdio.h>

int main() {

    int n,s;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c = 0;
    s = (n+1)*(n+2)/2;
    
    
     for(int i = 0;i<n;i++){
            c = c + a[i];
            
    }
    printf("%d\n",s-c);
    
}
