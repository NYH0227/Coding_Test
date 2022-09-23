#include<iostream>

using namespace std;

int T,n,cnt;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>T;
    while(T--) {
        cin>>n;
        for(int i = 2; n != 1; i++){
            cnt = 0;
            while (n%i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt != 0)
                cout<<i<<" "<<cnt<<"\n";
        }
    }
}
