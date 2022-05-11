#include <iostream>

using namespace std;

long long dp[1000004];
int T,n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i=4; i<1000004; i++)
        dp[i] = (dp[i-3]+dp[i-2]+dp[i-1])%1000000009;

    cin>>T;
    while(T--){
        cin>>n;
        cout<<dp[n]<<"\n";
    }

} 