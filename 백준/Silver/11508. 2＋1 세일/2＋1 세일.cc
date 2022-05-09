#include <iostream>
#include <queue>

using namespace std;

int T,n;
priority_queue<int> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int result = 0;
    cin>>T;
    
    while(T--){
        cin>>n;
        v.push(n);
    }
    
    for(int i = 0; v.size(); i++){
        if (i%3 != 2) result += v.top();
        v.pop();
    }
    cout<<result<<"\n";

}
