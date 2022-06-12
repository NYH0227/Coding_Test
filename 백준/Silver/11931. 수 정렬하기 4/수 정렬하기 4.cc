#include <iostream>
#include <algorithm>
using namespace std;

int a[1000004];
int n;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for (int i = 0; i<n; i++)
        cin>>a[i];
    
    sort(a, a + n, greater<int>());
    
    for (int i = 0; i < n; i++)
        cout << a[i] <<"\n";
}