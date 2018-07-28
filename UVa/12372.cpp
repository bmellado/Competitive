#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC, x, y, z, i = 1;
    scanf("%d",&TC);
    while(TC--){
        scanf("%d %d %d", &x, &y, &z);
        if(x <= 20 && y <= 20 && z <= 20) printf("Case %d: good\n",i++);
        else printf("Case %d: bad\n",i++);
    }



return 0;}
