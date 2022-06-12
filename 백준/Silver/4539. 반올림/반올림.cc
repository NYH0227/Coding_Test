#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n,t,result;
int n_size;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>t;
    while(t--){
        cin >> n;
        result = n;
        n_size = (int)log10(n)+1;
        
        for (int i=1; i<n_size; i++){
            result = (int)(n/pow(10, i) + 0.5);
            result *= pow(10, i);
            n = result;
        }
        
        cout<<result<<"\n";
    }
}