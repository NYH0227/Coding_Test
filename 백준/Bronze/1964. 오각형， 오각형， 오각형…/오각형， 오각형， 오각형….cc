#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    
    long long n=1;
    
    for (int i=1; i<=N; i++)
    {
        n += 3*i+1;
    }
    cout <<(n%45678)<<endl;

}
