// reverse the array
#include <stdio.h>

int main() {
    //to reverse the array print it from the last index value 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n-1;i>=0;i--){
        printf("%d ",arr[i]);
}
}
