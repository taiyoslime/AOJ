#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	multimap<ll,ll> m;
	ll n,tmp,ans[100000],q=0,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		m.insert(make_pair(tmp,i));
	}
	auto it = m.begin();
	c = (*it).first;
	it++;
	for(;it!=m.end();it++){
		if(c != (*it).first)q++;
		ans[(*it).second] = q;
		c = (*it).first;
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}
