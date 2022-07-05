#include <iostream>

using namespace std;

int n, m;
int map[9] = {0, };

void func(int x, int next);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    func(0, 1);
}

void func(int x, int next) {
    if(x == m) {
        for(int i = 0 ; i < m ; i++) {
            cout << map[i] << " ";
        }
        cout << '\n';
        return;
    }
    for(int i = next ; i <= n ; i++) {
        map[x] = i;
        func(x + 1, i);
    }
}