#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int main(){
	int n,w,a,b,dp[MAX],i,j;
	fill(dp,dp+MAX,1e9+1);
	dp[0]=0;
	cin>>n>>w;
	for(i=0;i<n;i++){
		cin>>a>>b;for(j=MAX-1;j>=a;j--)if(dp[j-a]!=1e9+1)dp[j]=min(dp[j],dp[j-a]+b);
	}
	for(i=MAX-1;i>=0;i--)if(dp[i]<=w){cout<<i<<endl;break;}
}
