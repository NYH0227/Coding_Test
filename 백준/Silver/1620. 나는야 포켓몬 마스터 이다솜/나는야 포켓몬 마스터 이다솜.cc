#include <bits/stdc++.h>

using namespace std;

map<string,int> map1;
map<int,string> map2;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    string s;
    int n,m;
    cin>>n>>m;
    
    // 도감에 넣기
    for(int i = 0; i<n; i++){
        cin>>s;
        map1[s] = i+1;
        map2[i+1] = s;
    }
    // 도감에서 입력값의 짝궁 출력
    for(int i = 0; i<m; i++){
        cin>>s;
        if (atoi(s.c_str()) == 0){
            cout<<map1[s]<<'\n';
        }else{
            cout<<map2[atoi(s.c_str())]<<'\n';
        }
    }
}
