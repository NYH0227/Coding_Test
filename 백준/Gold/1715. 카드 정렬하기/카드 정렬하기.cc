#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,c,result=0;
priority_queue<int,vector<int>,greater<int>> q;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    while(n--){
        cin>>c;
        q.push(c);
    }
    while(q.size() > 1){
        int f = q.top();
        q.pop();
        int s = q.top();
        q.pop();
        
        q.push(f+s);
        result += f+s;
    }
    cout<<result<<"\n";
}
