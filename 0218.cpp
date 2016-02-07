#include <iostream>
using namespace std;
int main(){
	int n,a,b,c,i,s,e;
	while(cin>>n,n){
		for(i=0;i<n;i++){
			cin>>a>>b>>c;s=(a+b+c)/3,e=(a+b)/2;
			cout<<(s>=80||e>=90||a==100||b==100||c==100?'A':(s>=70||(s>=50&&(a>=80||b>=80))?'B':'C'))<<endl;
		}
	}
}
