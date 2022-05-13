#include <iostream>

using namespace std;

long long dp[36];
int n;

//dp[1] = dp[0] * dp[0];
//dp[2] = dp[1]*dp[0]+ dp[0]+dp[1];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    dp[0] = 1;
    
    for (int i=1; i<36; i++)
        for(int j=0; j<i; j++)
            dp[i] += dp[j]*dp[i-j-1];
        
    cin>>n;
    cout<<dp[n]<<"\n";
    
}