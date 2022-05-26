#include <iostream>
#include <algorithm>

using namespace std;

int T,n,result;
int dp[100004];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> T;
    int arr[T+1];
    for(int i = 0; i<T; i++){
        cin >> n;
        arr[i] = n;
    }
    
    result = dp[0] = arr[0];
    
    for(int i = 1; i<T; i++){
        dp[i] = max(arr[i],dp[i-1]+arr[i]);
        result = max(result,dp[i]);
    }
    
    cout<<result<<"\n";
}