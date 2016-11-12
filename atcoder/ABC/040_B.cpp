#include <bits/stdc++.h>
using namespace std;
int main(){
	int i=1,n,s=1<<15,p;cin>>n;
	for(;p=(int)n/i,i<=p;i++)s=min(s,abs(p-i)+(n-p*i));
	cout<<s<<endl;
}
