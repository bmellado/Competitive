#include <bits/stdc++.h>
using namespace std;
int main(){
    // month, down payment, loan , number of depreciations
    int m;
    float dp, l, n;
    float value, payment;
    float month, depr;
    int ans;
    while(scanf("%d %f %f %f", &m, &dp, &l, &n)){
        if(m < 0) break;
        value = dp + l;
        payment = l/m;
        float A[3][(int)m + 1];
        A[2][0] = l;
        for(int j = 0; j <= m; j++){
            A[0][j] = -1;
            if(j != 0)
                A[2][j] = A[2][j-1] - payment;
        }
        while((int)n--){
            scanf("%f %f", &month, &depr);
            if(month == 0){
                A[0][0] = depr;
                A[1][0] = value*(1 - depr);
            }
            else
                A[0][(int)month] = depr;
        }
        for(int j = 0; j <= m; j++){
            if((int)A[0][j] == -1)
                A[0][j] = A[0][j-1];
            if(j!=0) A[1][j] = A[1][j-1] *(1 - A[0][j]);
            if(A[2][j] < A[1][j]){
                ans = j;
                break;
            }
        }
        printf("%d %s\n", ans, ans == 1 ? "month" : "months");
    }
return 0;}
