#include <iostream>
#include <string>

using namespace std;

int cnt = 0;
string s;
char UCPC[4] = {'U', 'C', 'P', 'C'};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    getline(cin, s);
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == UCPC[cnt]){
            cnt++;
            if(cnt == 4) {
                cout << "I love UCPC\n";
                return 0;
            }
        }
    }
    cout<<"I hate UCPC\n";
}