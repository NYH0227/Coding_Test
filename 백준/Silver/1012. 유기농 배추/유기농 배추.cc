#include <bits/stdc++.h>

using namespace std;

int T;
int a,b,c;

int arr[54][54];
int v[54][54];

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

void dfs(int y, int x){
    v[y][x] = 1;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx<0 || ny<0 || nx>=54 || ny>=54) continue;
        if (arr[ny][nx] == 1 && v[ny][nx]==0){
            dfs(ny,nx);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin>>T;
    while(T--){
        int cnt = 0;
        cin>>a>>b>>c;
        
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                arr[i][j] = 0;
                v[i][j] = 0;
            }
        }
        
        for(int i=0; i<c; i++){
            int x,y;
            cin>>x>>y;
            arr[y][x] = 1;
        }
        
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                if (arr[j][i] == 1 && v[j][i]==0){
                    dfs(j,i);
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}
