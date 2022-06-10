#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n,t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i = 0 ; i< n; i++ ){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<int>());
    
    
    for(int i = 0 ; i< n-2; i++ ){
        if (v[i]<v[i+1]+v[i+2]){
            cout<<v[i]+v[i+1]+v[i+2];
            return 0;
        }
    }
    cout<<"-1\n";
}