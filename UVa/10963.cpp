#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, W;
	int dif;
	int y1, y2;
	bool closed;
	scanf("%d", &n);
	for( int j = 0; j < n; j++){
		if (j != 0) printf("\n");
		scanf("%d", &W);
		closed = true;
		for( int i = 0; i < W; i++){
			scanf("%d %d", &y1, &y2);
			if( i == 0)
				dif = y1 - y2;
			else {
				if(y1 - y2 != dif){
					closed = false;
				}
			}			
		}
		printf("%s\n", closed ? "yes" : "no");
		
	}
return 0;}
