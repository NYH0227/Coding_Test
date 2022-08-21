#include <iostream>

using namespace std;

int x,y;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int max_ = 0;
    
    for(int i = 1; i<=9; i++){
        for(int j = 1; j<=9; j++){
            int t;
            cin>>t;
            
            if (max_ <= t){
                max_ = t;
                x = i;
                y = j;
            }
        }
    }
    cout<<max_<<"\n"<<x<<" "<<y;
}