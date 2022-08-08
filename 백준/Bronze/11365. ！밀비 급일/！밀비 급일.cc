#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(true){
        getline(cin,s);
        if(s == "END"){
            break;
        }
        reverse(s.begin(), s.end());
        cout<<s<<"\n";
    }
}
