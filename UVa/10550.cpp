#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    int angle;
    while(scanf("%d %d %d %d",&a,&b,&c,&d), a || b || c || d){
        angle=1080;
        angle+=((a > b ? a-b : 40-(b-a)) + (b>c ? 40-(b-c): c-b) + (c > d ? c-d : 40-(d-c)))*9;
        printf("%d\n",angle);
    }
return 0;}
