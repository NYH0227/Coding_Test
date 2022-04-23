#include <iostream>

using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    for (int i = 0; i<T; i++){
        int c = 0;
        int cnt = 0;
        cin >> c;
        for(int j=1; j<c+1; j++){
            if (c%j == 0) cnt++;
        }
        cout<<c<<" "<<cnt<<endl;
    }
}