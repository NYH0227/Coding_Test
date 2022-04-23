#include <iostream>

using namespace std;

int main()
{
    int T,N;
    long long p[101] = {1,1,1,2};
    
    for(int i = 4; i<101; i++)
        p[i] = p[i-2]+p[i-3];
    
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>N;
        cout<<p[N-1]<<endl;
    }
}