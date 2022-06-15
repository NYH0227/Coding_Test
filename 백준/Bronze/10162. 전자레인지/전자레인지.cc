#include <stdio.h>

int n;
int arr[3] = {300,60,10};

int main() {

    scanf("%d",&n);
    
    for(int i = 0; i<3; i++){
        int tmp = arr[i];
        arr[i] = n/tmp;
        n %= tmp;
    }
    
    if(n == 0){
        printf("%d %d %d\n",arr[0],arr[1],arr[2]);
    }else{
        printf("-1\n");
    }
}