#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n,m,ctn[1000],t;
	while(cin>>n>>m,n){
		fill(ctn,ctn+m,0);
		for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>t,ctn[j]+=t;
		t=0;
		int i=n;
		while(t!=m-1){
			for(int j=0;j<m;j++){
				if(ctn[j]==i){
					cout<<j+1<<" ";
					t++;
					ctn[j]=-1;
				}
			}
			i--;
		}
		for(int i=0;i<m;i++)if(ctn[i]!=-1)cout<<i+1<<endl;
	}
}
