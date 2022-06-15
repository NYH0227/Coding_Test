#include <iostream>

using namespace std;

int n;
int arr[3] = {300,60,10};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n;
    for(int i = 0; i<3; i++){
        int tmp = arr[i];
        arr[i] = n/tmp;
        n %= tmp;
    }
    
    if(n == 0){
        printf("%d %d %d\n",arr[0],arr[1],arr[2]);
    }else{
        printf("-1\n");
    }
}
