// to rotate the array for the given k value 
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Rotate : ");
    scanf("%d",&k);
    k = k%n; //for k > n 
    int rar[n];
    for(int i = 0;i<k;i++){
            rar[i] = arr[n-k+i];
    }
    for(int i = 0;i<n-k;i++){
            rar[k+i] = arr[i];
    }
    for(int i = 0;i<n;i++){
        printf("%d ",rar[i]);
    }
}
