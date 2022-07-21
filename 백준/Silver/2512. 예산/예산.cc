#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int t,n,m,res = 0;
vector<int> v;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    
    cin>>m;
    
    int start=0;
    int end=v[n-1];
    int sum;
    
    while(start<=end) {
        sum=0;
        int mid = (start+end)/2;
        for(auto i=0; i<n;i++) {
            sum += min(v[i],mid);
        }
        if(m>=sum) {
            res=mid;
            start=mid+1;
        }else {
            end=mid-1;
        }
    }
    cout<<res<<"\n";
}
