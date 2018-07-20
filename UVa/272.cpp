#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    char c;
    char dQuote = 0;
    while(scanf("%c", &c), c != EOF){
        if(c == '\"' && dQuote%2 == 0){
            printf("\`\`");
            dQuote++;
        }
        else if (c == '\"' && dQuote%2 == 1){
            printf("\'\'");
            dQuote++;
        }
        else printf("%c", c);
    }
return 0;}
