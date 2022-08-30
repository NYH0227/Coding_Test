#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int> > pq;
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n*n; i++){
        int t;
        cin >> t;
        pq.push(t);
        if(pq.size() > n) pq.pop();
    }
    
    cout << pq.top() << "\n";
}
