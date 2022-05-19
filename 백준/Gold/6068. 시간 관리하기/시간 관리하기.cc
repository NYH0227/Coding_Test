#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v;
int n,a,b,result;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    
    sort(v.begin(),v.end(),cmp);
    
    result = v[0].second-v[0].first;
    for(int i=1; i<n; i++){
        if (result >= v[i].second) result = v[i].second - v[i].first;
        else result -= v[i].first;
    }
    
    if(result < 0) cout<<"-1\n";
    else cout<<result<<"\n";
}