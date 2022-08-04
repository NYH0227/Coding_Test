#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int main(){
    cin>>n>>m;
    if(n < m)
        swap(n, m);
    cout<<(n+m+m/10)<<"\n";
}