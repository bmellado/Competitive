#include<bits/stdc++.h>
using namespace std;
int main(){
    char s [15];
    string nat;
    int i = 1;
    while(scanf("%s",s)){
        if(strcmp(s,"#")==0) break;
        if(strcmp(s,"HELLO")==0) nat = "ENGLISH";
        else if(strcmp(s,"HOLA")==0) nat = "SPANISH";
        else if(strcmp(s,"HALLO")==0) nat = "GERMAN";
        else if(strcmp(s,"BONJOUR")==0) nat = "FRENCH";
        else if(strcmp(s,"CIAO")==0) nat = "ITALIAN";
        else if(strcmp(s,"ZDRAVSTVUJTE")==0) nat = "RUSSIAN";
        else nat = "UNKNOWN";
        printf("Case %d: %s\n",i++,nat.c_str());
    }

return 0;}
