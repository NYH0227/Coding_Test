#include<iostream>

using namespace std;

int T,day;
long long n,m;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>T;
    while(T--){
        cin>>n>>m;
        day = 0;
        while(n){
            n /= 2;
            day++;
        }
        cout<<day+m<<"\n";
    }
}