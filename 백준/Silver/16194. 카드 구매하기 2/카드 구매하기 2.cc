#include <iostream>
#include <algorithm>

using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
        
    int dp[n];
    
    for(int i=1; i<n+1; i++)
        cin>>dp[i];
    
    for(int i=2; i<=n; i++){
        for(int j=1; j<=i/2; j++){
            dp[i] = min(dp[i],dp[j]+dp[i-j]);
        }
    }
    cout<<dp[n]<<"\n";
}