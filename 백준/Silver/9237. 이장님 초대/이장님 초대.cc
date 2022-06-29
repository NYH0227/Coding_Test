#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,t,result = 0;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<>());
    
    
    for(int i = 0; i < n; i++){
        t = v[i] + (i+2);
        result = max(result, t);
    }

    cout<<result<<"\n";
}