#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int result = 0;
    cin>>n;
    while(n--){
        cin>>s;
        stack<char> st;
        for(char c : s){
            if(st.size() && st.top()==c) st.pop();
            else st.push(c);
        }
        if (st.size() == 0) result++;
    }
    cout<<result<<"\n";
}
