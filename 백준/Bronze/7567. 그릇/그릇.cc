#include <iostream>
#include <string>

using namespace std;
int main() {
    string arr;
    char temp;
    int result = 0;
    
    cin>>arr;
    temp = arr[0];
    result += 10;
    for(int i=1; i<arr.size();i++){
        if(temp != arr[i]){
            result += 10;
        }else{
            result += 5;
        }
        temp = arr[i];
    }
    cout<<result<<endl;
    return 0;
}
