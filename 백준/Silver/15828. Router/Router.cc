#include <iostream>
#include <queue>

using namespace std;

int n,t;
queue<int> q;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    
    while(true){
        cin>>t;
        if(t == -1) break;
        
        if(t == 0) q.pop();
        else if(q.size()<n) q.push(t);
    }
    
    if(q.size()==0){
        cout<<"empty\n";
        return 0;
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }  
}