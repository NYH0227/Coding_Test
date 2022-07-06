#include<iostream>
#include<deque>

using namespace std;

int n;
deque<int> q;
deque<int> res;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    for(int i = 1; i<=n; i++)
        q.push_back(i);
    
    while(!q.empty()){
        res.push_back(q.front());
        q.pop_front();
        
        if(!q.empty()){
            q.push_back(q.front());
            q.pop_front();
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<res.front()<<" ";
        res.pop_front();
    }
}
