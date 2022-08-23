#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,k;
vector<int> v;
int t;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>k;
    for(int i = 0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());

    int res[n];
    int ans = 0;
    
    for(int i = 0; i<n-1; i++)
        res[i] = v[i+1]-v[i];
    
    sort(res,res+n-1);
    
    for(int i = 0; i<n-k; i++)
        ans += res[i];
    cout<<ans<<"\n";
}
