#include<iostream>

using namespace std;

int n,temp,res;
int a[7];

void DFS(int sum) {
    if (sum % 7 == 4) {
        res = 1;
        return;
    }
    for (int i = 1; i < 7; i++) {
        if (a[i] == 0) continue;
        a[i]--;
        DFS(sum + i);
        a[i]++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    
    for (int i = 0; i < n; i++) {
        cin>>temp;
        if (temp % 7 > 0){
            temp = temp % 7;
            a[temp]++;
        }
    }
    if (a[4] != 0){
        printf("YES");
        return 0;
    }
    DFS(0);
    
    if (res == 0) {
        printf("NO");
    }else{
        printf("YES");
    }
}
