#include <iostream>
#include <deque>
#include <string>

using namespace std;

int n, a;
string s;
deque<int> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    while(n--){
        cin >> s;
        
        if (s == "push"){
            cin>>a;
            q.push_back(a);
        }
        else if (s == "pop") {
            if (q.empty()) {
                cout<<"-1\n";
            } else {
                cout<<q.front()<<"\n";
                q.pop_front();
            }
        }
        else if (s == "size") cout<<q.size()<<"\n";
        else if (s == "empty") cout<<(q.empty() ? 1 : 0)<<"\n";
        else if (s == "front") cout<<(q.empty() ? -1 : q.front())<<"\n";
        else if (s == "back") cout<<(q.empty() ? -1 : q.back())<<"\n";
    }
}