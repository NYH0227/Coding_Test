#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N,M,K;
int t;
int cnt=0,sum=0;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>N;
    vector<int> v(N);
    
    cin>>M>>K;
    
    for(int i = 0; i<N; i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<int>());
    
    for(auto vv : v){
        sum += vv;
    }
    
    if(sum>=K*M){
        sum = 0;
        while(sum<K*M){
            sum += v[cnt];
            cnt++;
        }
        cout<<cnt<<"\n";
    }else{
        cout<<"STRESS\n";
    }
}