#include <iostream>
#include <string>

using namespace std;


int T,n;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>T;
    while(T--){
        cin>>n>>s;
        s.erase(s.begin()+n-1);
        cout<<s<<"\n";
    }
}