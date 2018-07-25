#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC,n,x;

    scanf("%d", &TC);
    while(TC--){
        scanf("%d",&n);
        int ma = 0, mi = 99;
        while(n--){
            scanf("%d", &x);
            mi = min(mi,x);
            ma = max(ma,x);
        }
        printf("%d\n", 2*(ma-mi));
    }
return 0;}

