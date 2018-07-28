#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,x,ans,i=1;
    while(scanf("%d", &N),N){
        ans = 0;
        while(N--){
            scanf("%d",&x);
            if(x > 0) ans++;
            else ans--;
        }
        printf("Case %d: %d\n",i++, ans);
    }
return 0;}
