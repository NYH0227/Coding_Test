#include<iostream>

using namespace std;

int n;
unsigned long long dp[94] = {0,1,1,2};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i=3; i<=n+1; i++){
        dp[i] = dp[i-2]+dp[i-1];
    }
    cout<<dp[n]<<"\n";
}