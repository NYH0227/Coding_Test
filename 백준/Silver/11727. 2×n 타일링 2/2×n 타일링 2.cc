#include <iostream>

using namespace std;

long long dp[1004];
int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    dp[1] = 1;
    dp[2] = 3;
    
    
    for (int i=3; i<1004; i++)
        dp[i] = (dp[i-2]*2+dp[i-1]) % 10007;
    
    cin>>n;
    cout<<dp[n]<<"\n";
    
}