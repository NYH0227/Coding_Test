#include <iostream>
#include <string>

using namespace std;

string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    getline(cin,s);
    
    for(char x : s){
        if(x >64 && x<78 || x>96 && x<110) cout<<char(x+13);
        else if(x>77 && x<91 || x>109 && x<123) cout<<char(x-13);
        else cout<<char(x);
    }
}