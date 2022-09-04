#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,x,y;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    
    vector<int> v(n);
    for(int i=0; i<n; i++)
        v[i] = i+1;
    
    for(int i = 0; i<m; i++){
        cin>>x>>y;
        reverse(v.begin()+x-1,v.begin()+y);
    }
    
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";   
}