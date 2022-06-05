#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int n,q; //n : 데이터 개수 , q : 테스트 수
int a,b; //입력값 temp;
vector<int> v;
int dp[1004] ={0,}; // 구간합 넣을 데이터

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>q;
    
    for(int i = 1; i<n+1; i++){
        cin>>a;
        v.push_back(a);
    }
    
    for(int i = 1; i<n; i++){
        dp[i] = abs(v[i]-v[i-1]) + dp[i-1];
    }

    for(int i = 0; i<q; i++){
        cin>>a>>b;
        cout<<dp[b-1] - dp[a-1]<<"\n";
    }
}