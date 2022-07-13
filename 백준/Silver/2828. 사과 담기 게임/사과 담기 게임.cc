#include <iostream>

using namespace std;

int N, M, J,v;
int res = 0;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>N>>M;
    cin>>J;
    int l = 1, r = M;
    for (int i = 0; i < J; i++){
        cin>>v;

        if ( !(l <= v && r >= v) ){
            int move = 0;
            if (r <= v){
                move = v - r;
                l += move;
                r += move;
            }else{
                move = l - v;
                r -= move;
                l -= move;
            }
            res += move;
        }
    }
    cout<<res<<"\n";
}