#include <iostream>
#include <string>

using namespace std;

int T,t,value;
string name;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>T;
    while(T--){
        int mx = 0;
        cin>>t;
        for(int i = 0; i<t; i++){
            int v=0;
            string n;
            cin>>v>>n;
            if(mx<v){
                mx = v;
                name = n;
            }
        }
        cout<<name<<"\n";
    }
}