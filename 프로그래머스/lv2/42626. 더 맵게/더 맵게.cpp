#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> pq(scoville.begin(),scoville.end());
    
    while(pq.top() < K){
        if(pq.size() == 1) return -1;
        
        int last = pq.top();
        pq.pop();
        
        int next = pq.top();
        pq.pop();
        
        pq.push(last+(next*2));
        answer++;
        
    }
    return answer;
}