#include <iostream>
#include <string>

using namespace std;
 
int sum = 0;
string input;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
    
    cin>>input;
 
    for(auto s : input)
        sum += arr[s-'A'];
    
    cout<<sum<<"\n";
}