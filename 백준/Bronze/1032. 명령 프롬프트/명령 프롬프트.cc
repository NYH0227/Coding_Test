#include <iostream>
using namespace std;

int T;
string result,s;
int main(){
    cin >> T;
    
    cin >> result;
    T--;
    
    while(T--){
        cin >> s;
        for (int i = 0; i < size(result); i++){
            if (result[i] != s[i])
                result[i] = '?';
        }
    }
    cout <<result<<"\n";
}
