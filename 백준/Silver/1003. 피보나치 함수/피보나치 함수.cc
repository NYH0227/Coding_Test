#include <stdio.h>

int dp[41];
int T,c;
int fibonacci(int n) {
    if (!n) {
        dp[0] = 0;
    } else if (n == 1) {
        dp[1] = 1;
    } else if (dp[n]==0){
        dp[n] = fibonacci(n-1) + fibonacci(n-2);
    }
    return dp[n];
}

int main(){
    fibonacci(40);
    
    scanf("%d",&T);
    while(T--){
        scanf("%d",&c);
        if(!c){
            printf("1 0\n");
        }else{
            printf("%d %d\n",dp[c-1],dp[c]);
        }
    }
}