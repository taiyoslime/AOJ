#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	ll n,dsum=0,disum=0,djsum=0,ic=0,jc=0,iic=-1,icount[100001],jcount[100001];
	cin>>n>>s;
	for(ll i=n-1;i!=-1;i--){
		switch(s[i]){
			case 'J':dsum+=disum;break;
			case 'O':disum+=ic;break;
			case 'I':ic++;
		}
		icount[i]=ic;
	}
	for(ll i=0;i<n;i++){
		if(s[i]=='O')djsum+=jc;
		if(s[i]=='J')jc++;
		jcount[i]=jc;
	}
	for(ll i=1;i<n;i++)iic=max(iic,icount[i]*jcount[i-1]);
	cout<<max(iic,max(disum,djsum))+dsum<<endl;
}
