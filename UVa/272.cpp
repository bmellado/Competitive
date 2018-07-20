#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000000];
    bool open = false;
    while(gets(c)){
        int len = strlen(c);
        for(int i = 0; i < len; i++){
            if(c[i]=='\"'){
                if(open) {
                    printf("''");
                    open = !open;
                }
                else {
                    printf("``");
                    open = !open;
                }
            }
            else printf("%c", c[i]);
        }
        printf("\n");
    }

return 0;}
