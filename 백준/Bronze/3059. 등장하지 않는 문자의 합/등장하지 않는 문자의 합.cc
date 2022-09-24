#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> vec;

int main(){
    int T;
    string s;
    int sum = 0;
    cin >> T;
    while (T--){
        int sum = 0;
        cin >> s;
        for (int i=0; i<26; i++){
            vec.push_back(0);
        }
        for (int i=0; i<s.size(); i++){
            vec[s[i] - 'A'] = 1;
        }
        for (int i=0; i<vec.size(); i++){
            if (vec[i] == 0) {
                int ans = i + 'A';
                sum += ans;
            }
        }
        cout << sum << endl;
        vec.clear();

    }
}

//[출처] #1. [C++] 백준 3059번/ 등장하지 않는 문자의 합|작성자 행지