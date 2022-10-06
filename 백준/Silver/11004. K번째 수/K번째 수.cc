#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> pq;
int n,k;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>k;
    
    for(int i = 0; i<n; i++){
        int t;
        cin>>t;
        pq.push(t);
        if(pq.size() == k+1){
            pq.pop();
        }
    }
    cout<<pq.top()<<"\n";
}