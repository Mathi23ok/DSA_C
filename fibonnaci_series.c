#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int f = 0,s=1;
    for(int i = 0;i<n;i++){
        printf("%d ",f);

        int temp = f + s;
        f = s;
        s = temp;
    }

    return 0;
}
