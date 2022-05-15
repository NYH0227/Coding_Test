#include <iostream>

using namespace std;

int n,cnt=0;

int main(){
    cin>>n;
    while(n>0){
        n &= (n-1);
        cnt++;
    }
    cout<<cnt<<"\n";
  
}