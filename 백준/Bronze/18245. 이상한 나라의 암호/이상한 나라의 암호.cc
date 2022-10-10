#include <iostream>
#include <string>
using namespace std;

string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int cnt = 2;
    while(true){
        getline(cin,s);
        if(s == "Was it a cat I saw?") break;
    
        for(int i = 0; i<s.length(); i += cnt) cout<<s[i];
        cout<<"\n";
        
        cnt++;
    }
}