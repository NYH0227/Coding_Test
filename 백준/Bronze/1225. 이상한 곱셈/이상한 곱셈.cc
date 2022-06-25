#include <iostream>
#include <string>
using namespace std;


long long sum = 0;
string n,m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    for(int i =0 ; i<n.length(); i++){
        for(int j =0 ; j<m.length(); j++){
            sum += (n[i]-48)*(m[j]-48);
        }
    }
    cout<<sum<<"\n";
}