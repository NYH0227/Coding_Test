#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n,m; //n : 끊어진 줄 수, m : 가게 수
int a,b; // temp
vector<int> va,vb; // a는 6개 패키지 가격, b는 1개 가격
int result;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>m;
    
    for(int i=0; i<m; i++){
        cin>>a>>b;
        va.push_back(a);
        vb.push_back(b);
    }
    
    sort(va.begin(),va.end());
    sort(vb.begin(),vb.end());
    
    if (va[0] > vb[0]*6){
        result += (n * vb[0]);
    } else {
        result += (n/6) * va[0];
        if(n%6*vb[0] > va[0]){
            result += va[0];
        } else {
            result += n%6*vb[0];
        }
    }
    cout<<result<<"\n";
}