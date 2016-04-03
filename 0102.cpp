#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,s[11];
	while(cin>>n,n){
		fill(s,s+10,0);int l=0;
		for(int i=0;i<n;i++){
			int y=0,t;
			for(int j=0;j<n;j++)cin>>t,y+=t,s[j]+=t,printf("%5d",t);
			printf("%5d\n",y);
		}
		for(int i=0;i<n;i++)printf("%5d",s[i]),l+=s[i];
		printf("%5d\n",l);
	}
}
