#include <iostream>
#include <string>
#include <queue>

using namespace std;
long long N,M;
long long t;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long sum = 0;
    cin>>N>>M;

    priority_queue<long long,vector<long long>> a;
    priority_queue<long long,vector<long long>,greater<int>> b;

    for(long long i=0; i<N; i++){
        cin>>t;
        a.push(t);
    }
    for(long long i=0; i<M; i++){
        cin>>t;
        b.push(t);
    }

    N = N<M ? N : M;
    for(long long i=0; i<N; i++){
        //max(0LL, a.top() - b.top());
        sum += max(0LL, a.top() - b.top());
        
        a.pop(); b.pop();
    }
    cout<<sum<<"\n";

}
