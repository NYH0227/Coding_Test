#include <iostream>
#include <string>

using namespace std;

string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    while(1){
        cin>>s;
        if (s=="#") break;
        int cnt = 0;
        while(string("aeiou").find(s[0]) == -1 && cnt++ < s.size()){
            s.push_back(s[0]);
            s.erase(0, 1);
        }
        cout<<s+"ay\n";
    }
}