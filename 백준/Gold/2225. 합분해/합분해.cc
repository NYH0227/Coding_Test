#include <iostream>

using namespace std;

long long dp[201][201];
int n, m;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    dp[0][0] = 0;

    for (int i = 1; i <= m; i++){
        dp[0][i] = 1;
    }
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000000;
        }
    }
    cout<<dp[n][m]<<"\n";
}
