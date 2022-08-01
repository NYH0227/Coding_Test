#include <iostream>

using namespace std;

int k,w,m;
int res = 0;

int main(void){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin>>k>>w>>m;
    
    while(k<w){
        k += m;
        res++;
    }
    cout<<res<<"\n"; 
}