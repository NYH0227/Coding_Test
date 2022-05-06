#include <iostream>

using namespace std;

int main(){

    int a = 32;
    
    cout<< (a>>2) << "==" << (a/4) <<"== 8\n";
    cout<< (a<<2) << "==" << (a*4) <<"== 128\n";
    
    cout<< (a>>5) << "==" << (a/32) <<"== 1\n";
    cout<< (a<<5) << "==" << (a*32) <<"== 1024\n";


}
