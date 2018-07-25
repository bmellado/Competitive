#include<bits/stdc++.h>
using namespace std;
int main(){
    int K;
    int x0,y0,x,y;
    while(scanf("%d", &K), K){
        scanf("%d %d", &x0, &y0);
        while(K--){
                scanf("%d %d", &x, &y);
                if (x > x0 && y > y0) printf("NE\n");
                else if ( x > x0 && y < y0) printf("SE\n");
                else if ( x < x0 && y < y0) printf("SO\n");
                else if ( x < x0 && y > y0) printf("NO\n");
                else printf("divisa\n");
        }
    }
return 0;}
