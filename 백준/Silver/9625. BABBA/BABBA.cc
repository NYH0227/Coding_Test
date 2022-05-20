#include <iostream>

using namespace std;

int n;
int A[46] ={1,};
int B[46] ={0,};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    A[1] = 0;
    B[1] = 1;
    for(int i=2; i<46; i++){
        A[i] = B[i-1];
        B[i] = A[i-1]+B[i-1];
    }
    cin>>n;
    cout<<A[n]<<" "<<B[n]<<"\n";
}
