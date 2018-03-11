#include <iostream>
using namespace std;
int main(){
	int n,c;
	while(cin>>n,n){
		for(c=0;n-1;c++)n%2?n=3*n+1:n/=2;
		cout<<c<<endl;
	}
}
