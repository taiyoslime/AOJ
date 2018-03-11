#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,t;
	while(cin>>n>>m,n){
		pair<int,int> v[m];
		for(int i=0;i<m;i++)v[i]=make_pair(n,i+1);
		for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>t,v[j].first-=t;
		sort(v,v+m);
		for(int i=0;i<m-1;i++)cout<<v[i].second<<' ';cout<<v[m-1].second<<endl;
	}
}
