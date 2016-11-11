#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,c=1,m;
	long long r=1,s=0;
	cin>>n>>m;
	while((n--)-1){
		cin>>a;
		if(m<a)c++,r+=c;
		else s+=r,c=1,r=1;
		m=a;
	}
	s+=r;
	cout<<s<<endl;
}
