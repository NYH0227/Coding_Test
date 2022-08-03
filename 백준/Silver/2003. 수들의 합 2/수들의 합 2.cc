#include <iostream>

using namespace std;

int n,m;
int A[10000];
int cnt = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin>>n>>m;

    for(int i = 0; i < n; ++i)
        cin >> A[i];

    
    int start = 0, end = 0;
    int sum = 0;
    while (start <= end && end <= n) {
        if (sum >= m) {
            if (sum == m)
                cnt++;
            sum -= A[start++];
        }
        else {
            sum += A[end++];
        }
    }
    cout<<cnt<<"\n";
}
