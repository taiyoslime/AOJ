#include <bits/stdc++.h>
using namespace std;
int n,q,a,b,c,w[100],i=0,j;
int main(){
	cin>>n>>q;
	for(i;i<q;i++){
		cin>>a>>b>>c;
		for(j=a-1;j<b;j++)w[j]=c;
	}
	for(j=0;j<n;j++)cout<<w[j]<<endl;
}
