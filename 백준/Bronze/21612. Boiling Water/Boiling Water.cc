#include <iostream>

using namespace std;

int P,B;
int main() {
    cin >> B;
    
    P = 5*B-400;

    cout<<P<<"\n";

    if (P > 100) cout << "-1";
    else if (P < 100) cout << "1";
    else cout<<"0";
}
