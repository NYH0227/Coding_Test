#include <iostream>

using namespace std;

long long dp[32] = {1,0,3,};
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    if(n&1){
        cout<<"0\n";
    }else{
        for(int i = 3; i<n+2; i++){
            dp[i] = dp[i-2]*3;
            for(int j=4; j<=i; j += 2){
                dp[i] += dp[i-j]*2;
            }
        }
        cout<<dp[n]<<"\n";
    }
}
