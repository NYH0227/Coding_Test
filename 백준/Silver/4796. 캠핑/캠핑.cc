#include <iostream>

using namespace std;

int L, P, V;
int main() {
    int a = 0;
    while (1) {
        cin >> L >> P >> V;
        if(L==0 && P==0 && V==0) break;
        int result = (V%P) > L ? (V / P)*L+L : (V/P)*L +V%P;
        a++;
        cout << "Case " << a << ": " << result <<endl;
    }
    return 0;
}
