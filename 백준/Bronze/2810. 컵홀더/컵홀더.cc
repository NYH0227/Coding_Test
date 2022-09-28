#include <iostream>
#include <string>

using namespace std;

int n, cnt = 1;
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 

    cin>>n>>s;
    for (int i = 0; i < n; i++) {
        cnt++;
        if (s[i] == 'L') i++;
    }
    cout<< (cnt>n ? n : cnt) <<"\n";
}