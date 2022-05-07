#include <string>
#include <iostream>

using namespace std;

int t,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin>>t;
    while(t--){
        string s="";
        cin>>n;
        while(n--){
            string temp;
            cin>>temp;
            
            if(s<temp) s += temp;
            else s = temp+s;
        }
        
        cout<<s<<"\n";
    }

}
