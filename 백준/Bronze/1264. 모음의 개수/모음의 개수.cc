#include <string>
#include <iostream>

using namespace std;

char mo[] = {'a','e','i','o','u'};
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true){
        int cnt = 0;
        
        getline(cin,s);
        if(!s.compare("#")) break;
        
        for(int i = 0; i<s.size(); i++){
            if (s[i]>=65 and s[i]<97) s[i] += 32;
            for(char m : mo){
                if(m == (s[i]))
                    cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}
