#include <iostream>
#include <string>
#include <map>

using namespace std;

int t,n;
string a,b;

int main(){
    cin>>t;
    while(t--){
        map<string,int> m;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            m[b]++;
        }
        long long result = 1;
        for (auto c : m){
            result *= ((long long)c.second+1);
        }
        result--;
        cout<<result<<"\n";
    }
}
