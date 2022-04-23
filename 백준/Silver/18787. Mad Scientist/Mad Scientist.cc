#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    int N, cnt = 0;
    string A;
    string B;
    
    cin>>N;
    cin>>A;
    cin>>B;
    
    for (int i=0; i < size(A); i++){
        if (A[i] == 'G' && B[i] == 'H'){
            B[i] = 'G';
            if (A[i + 1] == B[i + 1])
                cnt++;
        }
        else if (A[i] == 'H' && B[i] == 'G'){
            B[i] = 'H';
            if (A[i + 1] == B[i + 1])
                cnt++;
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}

