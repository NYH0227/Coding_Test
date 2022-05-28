#include<iostream>
#include<algorithm>

using namespace std;

long long n, result;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    result = 1;
    for (int i = 1; i <= n; i++){
        result *= i;
        
        result %= 10000000;
        while (result % 10 == 0)
            result /= 10;
    }
    cout <<result%10<<"\n";

}