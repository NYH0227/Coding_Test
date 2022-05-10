#include <iostream>
#include <memory.h>

using namespace std;

int dp[10004],coin[22],coins,pay;

int T;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin>>T;
    while(T--){
        cin>>coins;
        
        memset(dp,0,sizeof(dp));
        memset(coin,0,sizeof(coin));
        
        for(int i=0; i<coins; i++)
            cin>>coin[i];
        
        cin>>pay;
        dp[0] = 1;
        for(int i=0; i<coins; i++){
            for(int j=1; j<=pay; j++){
                if (j>=coin[i])
                    dp[j] += dp[j - coin[i]];
            }
        }
        cout<<dp[pay]<<"\n";
    }
}
