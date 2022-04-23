#include <iostream>

using namespace std;

int main(){
    int sum;
    int a;
    
    cin >> sum;
    for(int i=0; i<9;i++){
        cin>>a;
        sum -= a;
    }
    cout<< sum;
    
}