#include <iostream>

using namespace std;

int main(){
    
    char a = 'a';
    char b = 'b';
    
    cout<<a<<" : "<<b<<"\n";
    a ^= b;
    b ^= a;
    a ^= b;
    cout<<a<<" : "<<b<<"\n";
   
}
