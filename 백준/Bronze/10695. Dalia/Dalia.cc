#include <cmath>
#include <iostream>

using namespace std;

int n;
int a, b, c, d, e;
int t1,t2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        
        cin >> a >> b >> c >> d >> e;
    
        t1 = abs(b - d);
        t2 = abs(e - c);

        cout << "Case " << i << ": ";
        if ((t1 == 1 && t2 == 2) || (t1 == 2 && t2 == 1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
}