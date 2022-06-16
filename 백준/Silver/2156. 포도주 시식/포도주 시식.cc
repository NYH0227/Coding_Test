#include <iostream>

using namespace std;

int n, temp;
int wine[10004];
int dp[10004];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> wine[i];
 
    for (int i = 1; i < 3 && i <= n; i++){
        if (i == 1)
            dp[i] = wine[i];
        else
            dp[i] = wine[i] + wine[i - 1];
    }
 
    for (int i = 3; i <= n; i++){
        temp = max(dp[i - 1], wine[i] + dp[i - 2]); //2연
        temp = max(temp, wine[i] + wine[i - 1] + dp[i - 3]); //3연
        dp[i] = temp;
    }
    cout << dp[n];
}