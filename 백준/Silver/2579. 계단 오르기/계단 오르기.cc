#include <iostream>
using namespace std;

int n,v; // 300개의 개단에 최대값은 1만이니 int 면 충분
int dp[301]; // 계단 개수가 300개, 1칸씩 3번은 못가니 최대 배열 크기는 200이긴 할듯

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    int arr[n+1];
    
    for(int i=0; i<n; i++){
        cin>>v;
        arr[i] = v;
    }
    
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = arr[2] + max(arr[0], arr[1]);
    
    for (int i = 3; i < n; i++) {
        dp[i] = arr[i] + max(dp[i-3] + arr[i-1], dp[i-2]);
    }
    cout<<dp[n-1]<<"\n";
}