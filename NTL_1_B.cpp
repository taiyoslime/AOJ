#include <bits/stdc++.h>
using namespace std;
int main(){
	long long m,n,ans=1;cin>>m>>n;
	for(int i=0;i<n;i++){ans*=m;if(ans>1000000000)ans%=1000000007;}
	cout<<ans<<endl;
}
