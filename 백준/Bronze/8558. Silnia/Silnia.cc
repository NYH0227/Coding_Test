#include <iostream>

using namespace std;

int fec(int n){
    
    if (n <= 1) return 1;
    return n*(fec(n-1));
}

int n;

int main(void){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin>>n;
    
    if(n < 5){
        cout<<fec(n)%10<<"\n";
    }else{
        cout<<"0\n";
    }

}