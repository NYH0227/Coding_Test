#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

string s;
map<int,int> m;
int result = 0;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>s;
    
    for(int i = 0; i<s.length(); i++){
        if (s[i] == '9')
            s[i] = '6';
        m[s[i]] += 1;
    }
    
    for(auto m1 : m){
        if (m1.first == '6')
            m1.second = ceil(m1.second/2.0);
        
        result = max(result,m1.second);
    }
    cout<<result<<"\n";
    
}
