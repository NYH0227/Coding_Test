#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[15004];
int cnt,s,e;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    s = 0, e = n-1;
    while(s<e){
        if(arr[s]+arr[e]<m){
            s++;
        }else if(arr[s]+arr[e]>m){
            e--;
        }else{
            s++;
            e--;
            cnt++;
        }
    }
    cout<<cnt<<"\n";   
}