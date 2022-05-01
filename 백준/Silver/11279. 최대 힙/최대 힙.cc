#include<bits/stdc++.h>

using namespace std;
int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    priority_queue<long long,vector<long long>> a;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>t;
        a.push(t);
        if(t==0){
            cout<<a.top()<<"\n";
            a.pop();
        }
    }
}
