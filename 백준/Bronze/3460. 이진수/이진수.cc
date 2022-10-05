#include <iostream>

using namespace std;
 
int T, n;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> T;
    while (T--) {
        cin >> n;
        int b = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                cout << b << " ";
            }
            n /= 2;
            b++;
        }
    }
}