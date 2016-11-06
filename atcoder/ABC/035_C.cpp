#include <bits/stdc++.h>
using namespace std;
int i=0,n,q,a,b,o[200001];
int main(){
	cin>>q>>n;
	while(n--)cin>>a>>b,o[a-1]++,o[b]--;
	for(;i<q;i++)o[i+1]+=o[i],cout<<(o[i]&1);
	cout<<endl;
}
