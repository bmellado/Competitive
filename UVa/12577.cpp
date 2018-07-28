#include <bits/stdc++.h>
using namespace std;
int main(){
    int i = 1;
    char c[8];
    while(scanf("%s", c)){
        if(c[0] == '*') break;
        if(strcmp(c,"Hajj") == 0) printf("Case %d: Hajj-e-Akbar\n", i++);
        else printf("Case %d: Hajj-e-Asghar\n", i++);
    }
return 0;}
