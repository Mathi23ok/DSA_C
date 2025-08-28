// to find the second largest element in the array
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    int sm = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>sm && arr[i]!=m){
            sm = arr[i];
        }
    }
    printf("largest element : %d\n",m);
    printf("second largest element : %d",sm);
}
