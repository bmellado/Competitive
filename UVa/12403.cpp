#include <bits/stdc++.h>
using namespace std;
int main(){
    int T, x, ans = 0;
    scanf("%d",&T);
    char c[8];
    while(T--){
        scanf("%s",c);
        if(strcmp(c,"donate")==0){
            scanf("%d", &x);
            ans += x;
        }
        else
            printf("%d\n",ans);
    }
return 0;}
