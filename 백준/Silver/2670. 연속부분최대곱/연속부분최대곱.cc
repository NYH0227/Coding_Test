#include<iostream>
#include<algorithm>

using namespace std;

int n;
double dp[10004];
double t,res = 0;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>t;
        dp[i] = t;
    }
    res = dp[1];
    
    for(int i= 2; i<=n; i++){
        if(dp[i]*dp[i-1] >= dp[i]){
            dp[i] = dp[i]*dp[i-1];
        }
        res = max(res,dp[i]);
    }
    cout<<fixed;
    cout.precision(3);
    cout<<res<<"\n";
}