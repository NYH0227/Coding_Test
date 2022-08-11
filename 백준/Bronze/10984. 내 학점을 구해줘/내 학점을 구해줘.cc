#include<iostream>
#include<algorithm>

using namespace std;

int T,N,a;
double b;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>T;
    for(int i=0 ; i<T; i++){
        cin>>N;
        
        int score = 0;
        double value = 0.0;
        
        for(int j=0; j<N; j++){
            cin>>a>>b;
            score += a;
            value += (b*a);
        }
        cout.precision(2);
        cout<<score<<" "<<value/score<<"\n";
    }
}
