#include <iostream>

using namespace std;

int n,k,sum = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin>>n>>k;
    for(int i = 1; i<=k; i++)
        sum += i;

    if(n<sum)
        cout<<"-1\n";
    else if(n==sum || (n-sum)%k==0)
        cout<<k-1<<"\n";
    else
        cout<<k<<"\n";
}
