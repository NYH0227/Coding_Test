#include<iostream>

using namespace std;

int dp[51],n;
const int first = 1;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    
    for(int i=3; i<51; i++){
        dp[i] = (dp[i-2]+dp[i-1]+first)%1000000007;
    }
    cout<<dp[n]<<"\n";

}