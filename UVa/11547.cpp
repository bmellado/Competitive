#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC;
    long n;
    scanf("%d", &TC);
    while(TC--){
        scanf("%ld",&n);
        n = ((((567*n)/9)+7492)*235/47)-498;
        string number = to_string(n);
        int len = number.size();
        printf("%c\n", number[len-2]);
    }
return 0;}
