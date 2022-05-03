#include<bits/stdc++.h>

using namespace std;

map<string, int> ma;
vector<string> result;
int n,m;
string tem;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n>>m;
    
    for(int i=0; i<n+m; i++){
        cin>>tem;
        ma[tem]++;
        if(ma[tem] > 1) result.push_back(tem);
    }
    
    sort(result.begin(),result.end());
    
    
    cout<<size(result)<<"\n";
    for (auto r : result) cout<<r<<"\n";
}