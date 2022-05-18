#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

priority_queue<int,vector<int>,greater<int>> pqP;
priority_queue<int> pqM;

int n,x;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    while(n--){
        cin>>x;
        if(x>0) pqP.push(x);
        else if(x<0) pqM.push(x);
        
        else{
            //
            if(pqM.empty()&&pqP.empty()) cout<<"0\n";
            
            else if(pqM.empty()){
                cout<<pqP.top()<<"\n";
                pqP.pop();
            }else if(pqP.empty()){
                cout<<pqM.top()<<"\n";
                pqM.pop();
            }else if(abs(pqP.top()) >= abs(pqM.top())){
                cout<<pqM.top()<<"\n";
                pqM.pop();
            }else if(abs(pqP.top()) < abs(pqM.top())){
                cout<<pqP.top()<<"\n";
                pqP.pop();
            }
        }
    }
}
