#include <iostream>

using namespace std;

int r1=0,r2=0;
int n;
unsigned long long fib1(int n){
    if(n<=2){
        r1++;
        return 1;
    }
    return fib1(n-2)+fib1(n-1);
}

void fdp(int n){
    int dp[n];
    dp[1] = 1;
    dp[2] = 1;
    
    for(int i = 3; i<n; i++){
        r2++;
        dp[i] = dp[i-2]+dp[i-1];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    
    fib1(n);
    fdp(n);
    
    cout<<r1<<" "<<r2+1<<"\n";
}