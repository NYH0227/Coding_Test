#include <iostream>
using namespace std;
int main() {
    int n,x,temp;
    int cnt = 0;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        temp = i;
        while(temp){
            x=temp%10;
            if(x==3||x==6||x==9){
                cnt++;
            }
            temp/=10;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
