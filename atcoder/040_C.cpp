#include <bits/stdc++.h>
using namespace std;
long dp[100002],g[100002],n;
int main(){
	cin >> n;
	fill(dp,dp+100002,999999999);
	dp[0] = 0;
	for(int i=0;i<n;i++)cin >> g[i];
	for(int i=0;i<n-1;i++){
		dp[i+1] = min(abs(g[i+1] - g[i]) + dp[i],dp[i+1]);
		dp[i+2] = min(abs(g[i+2] - g[i]) + dp[i],dp[i+2]);
	}
	cout << dp[n-1] << endl;
}
