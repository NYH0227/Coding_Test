#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N , temp;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin>>N;
    
    for(int i =0; i<N; i++){
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    if(N%2==0){
        cout<<v[N/2-1]<<"\n";
    }else{
        cout<<v[N/2]<<"\n";
    }
    
}