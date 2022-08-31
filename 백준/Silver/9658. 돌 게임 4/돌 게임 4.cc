#include <iostream>

using namespace std;

int dp[1004];
int n;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 0;
    dp[4] = 1;
    dp[5] = 1;
    
    for(int i = 6; i<n+1; i++){
        if(dp[i-1]+dp[i-3]+dp[i-4] == 3){
            dp[i] = 0;
        }else{
            dp[i] = 1;
        }
    }
    if(dp[n]) cout<<"SK\n";
    else cout<<"CY";
    
}

