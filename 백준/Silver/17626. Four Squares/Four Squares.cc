#include <bits/stdc++.h>

using namespace std;

int dp[50004];
int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    
    dp[1] = 1;
    
    for (int i=1; i<n+1; i++){
        dp[i] = dp[1] + dp[i-1];
        for(int j=2; j*j<=i; j++)
            dp[i] = min(dp[i],dp[i-j*j]+1);
    }
    cout<<dp[n]<<"\n";
}
