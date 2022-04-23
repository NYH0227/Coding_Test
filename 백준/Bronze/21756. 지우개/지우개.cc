#include <iostream>

using namespace std;

int main()
{
    int c=2, result=1;
    int n;
    cin >> n;
    for (int i = 1; i<=n ; i++){
        if (i%c==0){
            result=i;
            c=c*2;
        }
    }
    cout<<result<<endl;
    
}