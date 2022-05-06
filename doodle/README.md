
---
### 대문자를 소문자로 바꾸는 비트연산
    string A = "ABCD";
    
    for(int i=0; i<A.size(); i++)
        A[i] ^= 32;
    cout<<A<<"\n";
    
### 소문자를 대문자로 바꾸는 비트연산
    for(int i=0; i<A.size(); i++)
        A[i] &= 223;
    cout<<A<<"\n";
