#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,n,ctn,i;string s;
	while(cin>>n,n){
		cin>>s;
		for(a=0;a<n;a++){
			char t=s[0];ctn=1;stringstream F;
			for(i=1;i<(int)s.length();i++)if(t==s[i])ctn++;else F<<ctn<<t,ctn=1,t=s[i];
			F<<ctn<<t,s=F.str();
		}
		cout<<s<<endl;
	}
}
