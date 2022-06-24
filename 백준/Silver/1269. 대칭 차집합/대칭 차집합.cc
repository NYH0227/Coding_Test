#include <iostream>
#include <set>

using namespace std;

int n,m;
int t;
set<int> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    for(int i =0 ; i<n; i++){
        cin>>t;
        s.insert(t);
    }
    for(int i =0 ; i<m; i++){
        cin>>t;
        s.insert(t);
    }
    
    cout<< n+m - (n+m-s.size())*2 <<"\n";
    
}