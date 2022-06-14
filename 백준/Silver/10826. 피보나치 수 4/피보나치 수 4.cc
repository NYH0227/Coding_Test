#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string dp[10004] = {"0","1","1",};
string sum(string a,string b);



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i = 3; i<n+1; i++){
        dp[i] = sum(dp[i-2],dp[i-1]);
    }
    cout<<dp[n]<<"\n";    
}


string sum(string a,string b){
    string result;
    int num;
    int c = 0;
 
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    
    while (a.length() < b.length()) {

        a += '0';
    }
    while (a.length() > b.length()) {
        b += '0';
    }
 
    for (int i = 0; i < a.length(); ++i) {
        num = (a[i] - '0' + b[i] - '0' + c) % 10;
        result += to_string(num);
        c = (a[i] - '0' + b[i] - '0' + c) / 10;
    }
    if (c != 0) {
        result += to_string(c);
    }
 
    reverse(result.begin(), result.end());
    return result;
}