#include <bits/stdc++.h>
using namespace std;
#define INF 
int main(){
	int  v,e,r,s,t;
	cin>>v>>e>>r;
	int cost[v][v],d[v];
	bool used[v];
	fill(d,d+v,INF);
	fill(used,used+v,false);
	fill(cost[0],cost[v],INF);
	for(int i=0;i<e;i++)cin>>s>>t,cin>>cost[s][t];
	d[r]=0;
	while(true){
		int f=-1;
		for(int i=0;i<v;i++)if(!used[i]&&(f==-1||d[i]<d[f]))f=i;
		if(f==-1)break;
		used[f]=true;
		for(int i=0;i<v;i++)d[i]=min(d[i],d[f]+cost[f][i]);
	}
	for(int i=0;i<v;i++){
		if(d[i]==INF)cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}
}
