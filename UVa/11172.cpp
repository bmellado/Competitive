#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC,x,y;
    scanf("%d", &TC);
    while(TC--){
        scanf("%d %d", &x, &y);
        if (x<y) printf("<\n");
        else if (x>y) printf(">\n");
        else printf("=\n");
    }
return 0;}
