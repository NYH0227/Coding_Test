#include <iostream>
#include <algorithm>

using namespace std;

int n, target;
int num[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> target;
    
    sort(num, num + n);
    
    int start, end, cnt;
    start = 0;
    end = n - 1;
    cnt = 0;
    while(start < end){
        if(num[start] + num[end] < target){
            start += 1;
        }else if(num[start] + num[end] > target){
            end -= 1;
        }else{
            start += 1;
            end -= 1;
            
            cnt += 1;
        }
    }
    cout<<cnt<<"\n";
}