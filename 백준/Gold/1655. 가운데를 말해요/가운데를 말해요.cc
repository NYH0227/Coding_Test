#include <iostream>
#include <queue>

using namespace std;

//2개의 queue로 나눠서 pq1은 절반 이상, pq2는 이하를 관리
priority_queue<int, vector<int>, greater<int>> pq1;
priority_queue<int> pq2;

int T,n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>T;
    while(T--){
        cin >> n;
        if(pq2.empty()) {
            pq2.push(n);
        }else if(n > pq2.top()) {
            pq1.push(n);
        }else{
            pq2.push(n);
        }
        
        if(pq1.size()>pq2.size()+1) {
            pq2.push(pq1.top());
            pq1.pop();
        }else if(pq2.size()>pq1.size()+1) {
            pq1.push(pq2.top());
            pq2.pop();
        }
        
        if(pq1.size() > pq2.size()) {
            cout<<pq1.top()<<"\n";
        }else{
            cout<<pq2.top()<<"\n";
        }
    }
}