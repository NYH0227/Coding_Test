#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n; // 사람수
long long result; // temp로 쓰다가 result로 쓸 예정
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>result;
        v.push_back(result);
    }
    sort(v.begin(),v.end(),greater<int>());
    result = 0;
    
    
    for(int i = 0; i<n; i++){
        if (v[i]-i >= 0){
            result += v[i]-i;
        }
    }
    cout<<result<<"\n";
}
