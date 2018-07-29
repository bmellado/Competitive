#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    char c[1000];
    while(N--){
        scanf("%s", c);
        if(strcmp(c,"1") == 0 ||
           strcmp(c,"4") == 0 ||
           strcmp(c,"78") == 0)
            printf("+\n");
        else if(c[strlen(c)-2] == '3' && c[strlen(c)-1] == '5')
            printf("-\n");
        else if(c[0] == '9' && c[strlen(c)-1] == '4')
            printf("*\n");
        else
            printf("?\n");
    }
return 0;}
