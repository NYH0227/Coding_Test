#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,res = 0;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    
    int temp = 0,cnt = 0;
    
    for(int i=0; i<=n; i++){
        if(v[i]==temp){
            cnt++;
            continue;
        }
        temp = v[i];
        res = max(cnt,res);
        cnt = 1;
    }
    cout<<res<<"\n";
}
