#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T,a,b;
vector<pair<int, int>> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>a>>b;
        v.push_back(pair(b,a));
    }
    
    sort(v.begin(),v.end());
    
    int cnt = 1;
    int time = v[0].first;
    
    for(int i=1; i<T ; i++){
        if(time <= v[i].second){
            cnt++;
            time = v[i].first;
        }
    }
    cout<<cnt<<"\n";
}
