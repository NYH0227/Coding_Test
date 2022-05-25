#include <iostream>
#include <algorithm>

using namespace std;

int n;
int P[1001];
int dp[1001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> P[i];

    for (int i = 1; i <= n; i++) {
        dp[i] = P[i];
        for (int j = 1; j < i; j++) {
            dp[i] = max(dp[i], dp[i - j] + P[j]);
        }
    }
    cout << dp[n]<<"\n";
}
