#include <bits/stdc++.h>
using namespace std;
int n=5;
int d[15][15];




int dp[1<<15][15];

int rec(int S, int v){
	if(dp[S][v]>=0)return dp[S][v];
	if(S == (1 << n) -1 && v == 0)return dp[S][v] = 0;
	int res = 2 << 10;
	for( int u = 0; u < n; u++){
		if(!(S >> u & 1) && d[v][u] != 0)
			res = min(res , rec(S | 1 << u, u) + d[v][u]);
	}
	return dp[S][v] = res;
}

int main(){
	d[0][1] = 3;
	d[0][3] = 4;
	d[1][2] = 5;
	d[2][0] = 4;
	d[2][3] = 5;
	d[3][4] = 3;
	d[4][1] = 6;
	d[4][0] = 7;

	memset(dp,-1,sizeof(dp));
	cout<<rec(0,0)<<endl;
}
