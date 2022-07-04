#include <iostream>
#include <algorithm>

using namespace std;

double a,b,c;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    double a,b,c;
    cin >> a >> b >> c;
    cout<<int(max(a/b*c,a*b/c))<<"\n";
}