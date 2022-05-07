### 소문자를 대문자로 변경 비트연산
    string a = "abCD";
    for(int i=0; i<a.size(); i++)
        a[i] &= 223;
    cout<<a<<"\n";
--- 
    ABCD
### 대문자를 소문자로 변경하는 비트연산
    string A = "abCD";
    for(int i=0; i<A.size(); i++)
        A[i] |= 32;
    cout<<A<<"\n";
---
    abcd
     
### 대소문자 양방향 변경하는 비트연산
    string A = "abCD";
    for(int i=0; i<A.size(); i++)
        A[i] ^= 32;
    cout<<A<<"\n";
---
    ABcd
### 짝수 홀수 구분하는 비트연산
    int n = 227;
    if(n&1) printf("홀수");
    else printf("짝수")
---
    홀수

### 곱셈, 나누기 비트연산
    곱하기 연산 << 
    나누기 연산 >>
    
    32<<3 = 32 * 2^3 = 256
    32<<5 = 32 * 2^5 = 1024
    
    32>>3 = 32 / 2^3 = 4
    32>>5 = 32 / 2^5 = 1

### 비트로 스왑하기
    char a = 'a';
    char b = 'b';
    
    cout<<a<<" : "<<b<<"\n";
    a ^= b;
    b ^= a;
    a ^= b;
    cout<<a<<" : "<<b<<"\n";
---
    a : b
    b : a
