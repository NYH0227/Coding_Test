#include <iostream>

using namespace std;

int n = 0;
long long res = 0;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    for (int i = 1; i <= n; i++){
        res += (n/i) * i;
    }
    cout<<res<<'\n';
}