#include <iostream>

using namespace std;

int answer = 987654321;
int A[100004];
int N, S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>N>>S;
    for(int i = 0; i < N; i++)
        cin>>A[i];
    
    
    int end = 0;
    int srt = 0;
    int sum = 0;
    
    while(srt<N && end<N || sum>=S){
        if(sum >=S){
            sum -= A[end];
            answer = min(answer, srt - end);
            end++;
        }else{
            sum += A[srt++];
        }
    }
    
    if(answer == 987654321)
        cout<<"0\n";
    else
        cout<<answer<<"\n";
}
