    


### 대문자를 소문자로 바꾸는 비트연산
    string A = "ABCD";
    for(int i=0; i<A.size(); i++)
        A[i] ^= 32;
    cout<<A<<"\n";
---
    abcd
### 소문자를 대문자로 바꾸는 비트연산
    string a = "abcd";
    for(int i=0; i<A.size(); i++)
        A[i] &= 223;
    cout<<A<<"\n";
--- 
    ABCD
### 짝수 홀수 구분하는 비트연산
    int n = 3;
    if(n&1) printf("홀수");
    else printf("짝수")
---
    홀수
