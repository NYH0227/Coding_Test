#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

long long sum = 0;
int n,m;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++){
        sum += abs(v[i] - (i + 1));
    }
    cout<<sum<<"\n";
}
