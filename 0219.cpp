#include <iostream>
using namespace std;
int main(){
	int n,t,i,j;
	while(cin>>n,n){
		int c[10]={0};
		for(i=0;i<n;i++)cin>>t,c[t]++;
		for(i=0;i<10;i++){if(!c[i])cout<<'-';else for(j=0;j<c[i];j++)cout<<'*';cout<<endl;}
	}
}
