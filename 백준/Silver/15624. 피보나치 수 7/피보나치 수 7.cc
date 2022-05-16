#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    long long dp[n+2];
    
    dp[0] = 0; dp[1] = 1; dp[2] = 1;
    
    for (int i=3; i<n+1; i++)
        dp[i] = (dp[i-2] + dp[i-1])%1000000007;
    
    printf("%lld\n",dp[n]);
   
}