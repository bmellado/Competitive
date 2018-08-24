#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, B, H, W;
	int p,a;
	while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF){
		int ans = B + 1;
		for (int i = 0; i < H; i++){
			scanf("%d", &p);
			int q = 0;
			for(int j = 0; j < W; j++){
				scanf("%d", &a);
				q = max(q, a);
			}
			if( q >= N)
				ans = min(ans, N*p);
		}
		if( ans == B + 1)
			printf("%s\n", "stay home");
		else
			printf("%d\n", ans);
	}	
return 0;}