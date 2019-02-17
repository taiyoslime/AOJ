#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,k,sum[100001],i,p,ans=0;
	cin>>n>>k;
	sum[0] = 0;
	for(i=0;i<n;i++){
		cin>>p;
		sum[i+1] = sum[i] + p;
	}
	for(i=0;i<n-k+1;i++)ans += sum[i+k] - sum[i];
	cout << ans << endl;
}
