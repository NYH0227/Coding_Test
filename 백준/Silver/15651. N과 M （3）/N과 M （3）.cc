#include <iostream>

using namespace std;

int arr[8]; // 1~7
int n, m;

void func(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        arr[cnt] = i;
        func(cnt + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    func(0);
}