#include <iostream>
#include <vector>

using namespace std;

vector<int> v[100004];
int arr[100004]={1};
int n,x,y;
void dfs(int x);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i = 0; i<n-1; i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    for(int i = 2; i<=n; i++)
        cout<<arr[i]<<"\n";
}

void dfs(int x){

    for(int i=0;i<v[x].size();i++){
        int k = v[x][i];

        if(arr[k]==0){
            arr[k] = x;
            dfs(k);
        }
    }
    return;
}