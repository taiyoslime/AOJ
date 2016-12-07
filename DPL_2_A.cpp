#include <bits/stdc++.h>
using namespace std;
int dp[1<<15][15],d[15][15],a,b,c,n,p,INF=1<<30;
int rec(int s,int v){
	if(dp[s][v]!=-1)return dp[s][v];
	if(s==(1<<n)-1&&v==0)return 0;
	int res=INF;
	for(int i=0;i<n;i++)if(!(s>>i&1)&&d[v][i]!=-1)res=min(res,rec(s|(1<<i),i)+d[v][i]);
	return dp[s][v]=res;
}
int main(){
	memset(dp,-1,sizeof(dp));
	memset(d,-1,sizeof(d));
	cin>>n>>p;
	for(int u=0;u<p;u++)cin>>a>>b>>c,d[a][b]=c;
	cout<<(INF==(a=rec(0,0))?-1:a)<<endl;
}
 
