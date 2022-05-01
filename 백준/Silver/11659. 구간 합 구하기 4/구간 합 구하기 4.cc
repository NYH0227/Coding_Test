#include<vector>
#include<iostream>

using namespace std;
int n,m;
int t;
int s,e;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>m;
    
    vector<int> a;
    a.push_back(0);
    for(int i =0; i<n; i++){
        cin>>t;
        t += a[i];
        a.push_back(t);
    }
    
    while(m--){
        int sum = 0;
        cin>>s>>e;
        sum = a[e]-a[s-1];
        cout<<sum<<"\n";
    }
}
