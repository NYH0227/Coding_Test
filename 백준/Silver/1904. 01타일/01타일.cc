#include <iostream>

using namespace std;

int n;
int dp[1000004] = {1,2,3,5,8,};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    for(int i=4 ; i<n+1; i++){
        dp[i] = (dp[i-2] + dp[i-1])%15746;
    }
    cout<<dp[n-1]<<"\n";
}