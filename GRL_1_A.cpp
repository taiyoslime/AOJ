//ダイクストラのれんしゅう
//
//隣接リスト実装するとあたまがいたくなるのでね
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int  v //頂点
		,e //辺
		,r //始点
		;
	cin>>v>>e>>r;
	int cost[v][v];//重み
	int d[v];//最短距離
	bool used[v]; // すでに使われたか？

	int INF = 1<<30;//なんかclnag-linterがdefine使うとガチギレしてアスペ

	//初期化
	fill(d,d+v,INF);
	fill(used,used+v,false);
	fill(cost[0],cost[v],INF);

	int s,t;//入力用の使いすて変数
	for(int i=0;i<e;i++)cin>>s>>t,cin>>cost[s][t];

	d[r]=0; //始点がrなので距離はもちろん0

	//ここからが本作業デース
	while(true){
		int f = -1;//フ↑ラ↓ッグ
		for(int i=0;i<v;i++)
			if(!used[i] && d[i] < d[f]) f = i;
		if(f == -1)break;
		used[f] = true;
		for(int i=0;i<v;i++)
			if(cost[f][i]!=INF/*心配性なんで*/)
				cout<<"i:"<<i<<" d[i]:"<<d[i]<<" cost[f][i]:"<<cost[f][i]<<endl
				,d[i] = min(d[i],d[f]+cost[f][i]);
	}

	//出力
	for(int i=0;i<v;i++){
		if(d[i]==INF)cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}

}
