#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    int start = 0;
    int end = n - 1;
    int mid = abs(v[start] + v[end]);
    int a=v[start], b=v[end];

    while(start<end){
        if(abs(v[start] + v[end]) < mid){
            mid = abs(v[start] + v[end]);
            a = v[start];
            b = v[end];
        }
        if(abs(v[start]) > (abs(v[end]))){
            start++;
        }else{
            end--;
        }
    }
    cout<<a<<" "<<b<<"\n";
}