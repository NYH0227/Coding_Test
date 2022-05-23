#include <iostream>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int,vector<int>> pq;
int s[300004];
int n,k,result=0;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>k;
    cin>>s[0];
    
    for(int i = 1; i<n ; i++){
        cin>>s[i];
        int t = s[i]-s[i-1];
        pq.push(t);
        result += t;
    }
    
    for(int i = 0 ; i<k-1 ; i++){
        result -= pq.top();
        pq.pop();
    }
    
    cout<<result<<"\n";
    
}
