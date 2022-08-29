#include <bits/stdc++.h>

using namespace std;

int N, M;
int arr[9];
bool vi[9];
vector<int> v;

void func(int a, int k){
    if (k == M){
        for (int i = 0; i < M; i++)
            cout << arr[i] << " ";
        cout<<"\n";
    }else{
        for(int i = a; i < v.size(); i++){
            if (vi[i]) 
                continue;
            vi[i] = true;
            arr[k] = v[i];
            func(i, k + 1);
            vi[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    func(0,0);
}