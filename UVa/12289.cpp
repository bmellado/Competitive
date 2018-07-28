#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d",&N);
    while(N--){
        char c[7];
        scanf("%s",c);
        if(strlen(c)==5) printf("3\n");
        else if( c[0] == 'o' && c[1] == 'n' ||
                 c[0] == 'o' && c[2] == 'e' ||
                 c[1] == 'n' && c[2] == 'e'
                ) printf("1\n");
        else printf("2\n");
    }
return 0;}
