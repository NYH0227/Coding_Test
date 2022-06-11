#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string n;
int sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    sort(n.begin(),n.end(),greater<int>());
    
    
    for(int i = 0; i<n.length(); i++)
        sum += n[i]-48;
    
    if((sum%3 != 0) || (n[n.length()-1] != '0') ){
        cout<<"-1\n";
        return 0;
    }
    for(int i = 0; i<n.length(); i++){
        cout<<n[i];
    }
}