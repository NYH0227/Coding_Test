#include <iostream>
#include <cmath>
using namespace std;

int A,B,C,D,E;
int res;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>A>>B>>C>>D>>E;
    
    if(A<0)
        cout<<abs(A)*C + D + B*E<<"\n";
    else
        cout<<(B-A)*E<<"\n";
}
