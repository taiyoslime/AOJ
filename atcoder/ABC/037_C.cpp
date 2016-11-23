#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,sum=0,p;cin>>n>>k;
	for(i=0;i<k;i++){
		cin>>p;
		if(min(n-i,i)<k)sum+=p*(min(n-i,i)+1);
		else sum+=k*p;
	}
	cout << sum;
}
