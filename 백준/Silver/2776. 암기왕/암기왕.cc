#include<iostream>
#include<algorithm>

using namespace std;

int T, N, M;
int arr[1000004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> T;
    
    while(T--){
        cin >> N;
        for (int i = 0; i < N; i++) cin >> arr[i];
        
        sort(arr, arr + N);
        cin >> M;
        for (int i = 0; i < M; i++) {
            
            int num;
            int left = 0;
            int right = N - 1;
            bool isMem = false;
            
            cin >> num;
            while (left <= right) {
                int mid = (left + right) / 2;
                
                if (num < arr[mid]) {
                    right = mid - 1;
                } else if (num > arr[mid]) {
                    left = mid + 1;
                } else {
                    isMem = true;
                    break;
                }
            }
            cout << (isMem ? "1" : "0")<<"\n";
        }
    }
}
