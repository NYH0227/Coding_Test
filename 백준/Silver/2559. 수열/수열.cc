#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N,K;
    cin>> N>>K;
    
    int arr[N];
    for(int i = 0 ; i<N; i++){
        cin>>arr[i];
    }
    
    int sum = 0;
    int max1 = -100*(N+4);
    for(int i = 0 ; i<N; i++){
        if (i<K-1) sum+=arr[i];
        else{
            sum=sum+arr[i]-arr[i-K];
            max1 = max(max1,sum);
        }
    }
    cout<<max1<<endl;
}
