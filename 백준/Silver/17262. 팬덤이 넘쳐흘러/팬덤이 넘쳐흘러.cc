#include<iostream>
#include<algorithm>

using namespace std;

int s[100005], e[100005];
int n, result;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i] >> e[i];

    sort(s, s + n);
    sort(e, e + n);
    
    result = s[n-1] - e[0];
    
    if (result > 0)
        cout <<result<<"\n";
    else
        cout << "0";
}