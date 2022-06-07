#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>a>>b;
    while(true){
        if(b.back() == 'A') {
            b.pop_back();
        }else{
            b.pop_back();
            reverse(b.begin(), b.end());
        }
        if(a.size() == b.size()){
            if (a == b) {
                cout <<"1\n";
            }else{
                cout << "0\n";
            }
            break;
        }
    }
}
