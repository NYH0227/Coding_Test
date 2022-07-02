#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,k,t;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n>>k;
    for(int i = 0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<>());
    
    cout<<v[k-1]<<"\n";
}