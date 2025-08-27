//to check whether the array is sorted
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a = 1; //to check

    
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            a = 0;
        }
}
if(a==0){
printf("Not sorted !");
}else{
printf("Sorted");
}

}
