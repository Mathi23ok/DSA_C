// move the zeros to the end 
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c = 0;
     for(int i = 0;i<n;i++){
        if(a[i] == 0){
            c = c+1;
        }else{
            printf("%d ",a[i]);
        }
    }
    for(int i= 0;i<c;i++){
        printf("0 ");
    }
    
}
