#include <iostream>
#include <string>

using namespace std;

string name;
int n,m;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    while(true){
        cin>>name>>n>>m;
        if (name=="#") break;
        
        cout<<name;
        (n >17 || m >= 80) ? cout<<" Senior\n" : cout<<" Junior\n";
    }
}