#include<bits/stdc++.h>
using namespace std;

int n,res;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    vector<pair<int,int>> v(n);
    
    for(int i=0; i<n; i++)
        cin>>v[i].first>>v[i].second;
    
    sort(v.begin(),v.end());

    res = v[0].first + v[0].second;
    
    for(int i = 1; i < v.size(); i++)
        res = max(res, v[i].first) + v[i].second;
    
    cout<<res<<"\n";
}