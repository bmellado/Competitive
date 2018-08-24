#include <bits/stdc++.h>
using namespace std;

int g(int n){
	if(n < 10) return n;
	int ans = 0;
	while(n > 0){
		ans += n % 10;
		n /= 10;
	}
	g(ans);
}

int main(){
	int n;;
	while(scanf("%d", &n), n){
		printf("%d\n", g(n));
	}

return 0;}