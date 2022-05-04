#include <iostream>
#include <string>
#include <vector>

using namespace std;

int T;
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    
    int cnt = 0;
    
    cin>>T;
    while(T--){
        bool flog = true;
        vector<char> v;
        cin>>s;
        v.push_back(s[0]);
        for(int i = 1; i<s.length(); i++){
            if(s[i] == s[i-1]) continue;
            for(auto vi : v){
                if(vi==s[i]){
                    flog = false;
                    break;
                }
            }
            v.push_back(s[i]);
            if(!flog) break;
        }
        if(flog) cnt++;
    }
    cout<<cnt<<"\n";
}
