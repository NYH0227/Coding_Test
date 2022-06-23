#include <iostream>
#include <algorithm>

using namespace std;

int a[1004];
int dp[1004];

int n,result=0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    for (int i = 0; i<n; i++)
        cin >> a[i];

    for (int i = 0; i<n; i++) {
        dp[i] = a[i];
        for (int j = 0; j < i; j++) {
            if(a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + a[i]);
        }
    }
    for (int i = 0; i<n; i++)
        result = max(result, dp[i]);
    cout<<result;
}