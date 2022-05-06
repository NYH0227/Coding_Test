### 소문자를 대문자로 바꾸는 비트연산
    string a = "abcd";
    for(int i=0; i<a.size(); i++)
        a[i] &= 223;
    cout<<a<<"\n";
--- 
    ABCD
### 대문자를 소문자로 변경하는 비트연산
    string A = "ABCD";
    for(int i=0; i<A.size(); i++)
        A[i] |= 32;
    cout<<A<<"\n";
---
    abcd
     
### 대소문자 양방향 가능한 비트연산
    string A = "ABCD";
    for(int i=0; i<A.size(); i++)
        A[i] ^= 32;
    cout<<A<<"\n";
---
    abcd
### 짝수 홀수 구분하는 비트연산
    int n = 227;
    if(n&1) printf("홀수");
    else printf("짝수")
---
    홀수
