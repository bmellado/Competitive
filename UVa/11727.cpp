#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC,nCase=1;
    scanf("%d", &TC);
    while(TC--){
        vector<int> n;
        int x,i=3;
        while(i--){
            scanf("%d", &x);
            n.push_back(x);
        }
        sort(n.begin(),n.end());
        printf("Case %d: %d\n",nCase++,n[1]);
    }
return 0;}
