#include <bits/stdc++.h>
using namespace std;
int main(){
	int s,n,c,i,j;
	while(cin>>n,n){
		c=0;for(i=1;i<n/2+1;i++){s=i;for(j=1;s<n;j++){s+=(i+j);if(s==n){c++;break;}}}
		cout<<c<<endl;
	}
}
