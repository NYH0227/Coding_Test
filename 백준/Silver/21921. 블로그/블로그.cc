#include <iostream>

using namespace std;

int Sum[250004];
int n,m,x;
int mx = 0, cnt = 0;
int main() {
    cin >> n >> x;
    
    
    for (int i = 1; i <= n; ++i) {
        cin >> m;
        Sum[i] = Sum[i - 1] + m;
    }
    
    for (int i = x; i<=n; ++i) {
        if (mx < Sum[i] - Sum[i - x]) {
            mx = Sum[i] - Sum[i - x];
            cnt = 1;
        }else if(mx == Sum[i] - Sum[i - x]){
            ++cnt;
        }
    }
    
    if(mx == 0)
        cout<<"SAD";
    else
        cout<<mx<<"\n"<<cnt<<"\n";
    
}
