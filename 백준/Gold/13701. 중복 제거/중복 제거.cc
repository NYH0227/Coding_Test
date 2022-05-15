#include <stdio.h>

int arr[1048608];
int n,idx,s;

int main(){

    while(scanf("%d", &n) != EOF){
        idx = n/32;
        s = n%32;
        
        if (arr[idx] & (1 << s)) continue;

        printf("%d ",n);
        arr[idx] += (1 << s);
    }
}
//https://zoosso.tistory.com/996 참고
