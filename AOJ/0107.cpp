#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[3],n,r;
	while(cin>>a[0]>>a[1]>>a[2],a[0]){
		cin>>n;sort(a,a+3);
		for(int i=0;i<n;i++){
			cin>>r;
			cout<<((a[0]*a[0]+a[1]*a[1]<4*r*r)?"OK":"NA")<<endl;
		}
	}
}
