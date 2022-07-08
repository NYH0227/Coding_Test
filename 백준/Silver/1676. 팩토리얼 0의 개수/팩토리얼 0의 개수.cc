#include<iostream>

using namespace std;

int n,now;
int res = 0;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    
    for(int i = 1; i<=n; i++){
        now = i;
        while (now%5 == 0){
            res++;
            now /= 5;
        }
    }
    cout<<res<<"\n";
}