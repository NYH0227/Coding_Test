#include<iostream>

using namespace std;

int dp[100004],n;
const int m = 9901;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    dp[1] = 3;
    dp[2] = 7;
    
    for(int i=3; i<n+4; i++){
        dp[i] = (dp[i-1]*2+dp[i-2])%m;
    }
    cout<<dp[n]<<"\n";

}
