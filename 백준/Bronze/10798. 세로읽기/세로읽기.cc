#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> v;
string t;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int max = 0;
    
    for (int i = 0; i < 5; i++) {
        cin>>t;
        v.push_back(t);

        if (max < t.size()){
            max = t.size();
        }
    }

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (v[j].size()>=i && v[j][i]!=NULL) {
                cout<<v[j][i];
            }
        }
    }
}
