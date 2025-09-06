
#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int s = 1;
    for(int i = 0;i<n;i++){
        if(i%2==0){
            s = 1;
        }else{
            s = 0;
        }
       for(int j = 0;j<=i;j++){
               printf("%d",s);
               s = 1 - s;
           
       }
       printf("\n");
    }
}
/*
Enter the value of n:5
1
01
101
0101
10101
*/
