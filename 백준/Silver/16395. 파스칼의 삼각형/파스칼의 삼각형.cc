#include<iostream>

using namespace std;

int dp[31][31]={0};
int n,k;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(int i =0 ; i<31; i++){
        for(int j = 0 ; j<31 ;j++){
            if(j==0)
                dp[i][j] = 1;
            else if(i==j)
                dp[i][j] = 1;
            else if(i>j){
                dp[i][j] =dp[i-1][j-1]+dp[i-1][j];
            }
        }
    }
    
    cin>>n>>k;
    cout<<dp[n-1][k-1]<<"\n";
}
