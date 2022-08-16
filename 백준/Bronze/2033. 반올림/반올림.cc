#include <iostream>

using namespace std;

int N;
int now = 1;
int Next = 10;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>N;

    while(true){
        if(N <= Next){
            break;
        }
        //사사오입 생각
        if((N/now)% 10 >= 5) {
            N = (N/Next+1)*Next;
        }else{
            N = (N/Next)*Next;
        }
        now = Next;
        Next *= 10;
    }
    cout<<N<<"\n";
}