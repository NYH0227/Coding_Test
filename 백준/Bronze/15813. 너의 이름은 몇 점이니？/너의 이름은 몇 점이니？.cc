#include<iostream>
#include<string>

using namespace std;

int n,res=0;
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>s;
    for(int i=0; i<s.size(); i++)
        res += s[i]-64;
    
    cout<<res<<"\n";
}