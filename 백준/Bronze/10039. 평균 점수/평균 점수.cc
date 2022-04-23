#include <iostream>

using namespace std;

int main(){
    int a[5];
    int sum = 0;
    for(int i = 0 ; i<5; i++){
        cin >> a[i];
        if (a[i] < 40){
            a[i] = 40;
        }
        sum += a[i];

    }
    cout << sum/5;
    
}