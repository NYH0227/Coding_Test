#include <iostream>
using namespace std;

int cnt[104];

int main()
{
    int a,b,c;
    int n,m;
    int result = 0;
    
    cin>>a>>b>>c;
    for(int i =0 ; i<3; i++){
        cin>>n>>m;
        for (int j=n; j<m ; j++){
            cnt[j]++;
        }
    }
    for (int i = 1; i<100 ; i++){
        if (cnt[i]){
            if (cnt[i] == 1) result += a;
            else if (cnt[i]==2) result += b*2;
            else if (cnt[i]==3) result += c*3;
        }
    }
    cout<<result<<endl;
}

