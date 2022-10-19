#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> v;
int arr[10004];


void func(int x,int y) {

    if (x == m) {
        for (int i = 0; i < m; i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        return;
    }
    
    for (int i = y; i <= n; i++) {
        v.push_back(arr[i - 1]);
        func(x + 1, i);
        v.pop_back();
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        int t;
        cin>>t;
        arr[i] = t;
    }
    sort(arr,arr+n);
    func(0,1); 
}
