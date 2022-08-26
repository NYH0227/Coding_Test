#include<iostream>

using namespace std;

int n,s,res = 0;
int arr[21];
void func(int idx,int sum,int c);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n>>s;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    func(0,0,0);
    cout<<res<<"\n";
}

void func(int idx,int sum,int c){
    
    if(c == n) return;

    for(int i = idx; i<n; i++){
        int t = arr[i]+sum;
        
        if(t == s) res++;
        func(i + 1,t,c+1);
    }
}