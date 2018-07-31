#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, f;
	int area, animals, ev;
	int ans;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &f);
		ans = 0;
		while(f--){
			scanf("%d %d %d", &area, &animals, &ev);
			ans += area * ev;
		}
		printf("%d\n", ans);
	}
return 0;}