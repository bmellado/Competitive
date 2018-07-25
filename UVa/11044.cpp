#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC;
    scanf("%d",&TC);
    while(TC--){
        int n,m;
        scanf("%d %d", &n, &m);
        int sonar = ceil((n-2)/3.0)*ceil((m-2)/3.0);
        printf("%d\n",sonar);
    }
return 0;}
