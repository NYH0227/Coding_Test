#include <iostream>

using namespace std;

long long n,m;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n>>m;
    if(n<m){
        cout<<(m+n)*(m-n+1)/2<<"\n";
    }else{
        cout<<(n+m)*(n-m+1)/2<<"\n";
    }
}