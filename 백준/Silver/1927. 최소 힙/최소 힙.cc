#include<vector>
#include<iostream>
#include<queue>

using namespace std;
int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    priority_queue<int,vector<int>,greater<int>> a;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>t;
        if(t>0){
            a.push(t);
        }else{
            if(!a.empty()){
                cout<<a.top()<<"\n";
                a.pop();
            }else{
                cout<<"0\n";
            }
        }
    }
}