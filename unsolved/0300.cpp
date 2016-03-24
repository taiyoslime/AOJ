#include <bits/stdc++.h>
using namespace std;
int solve(string &_p,int count){
	cout<<_p<<endl;
	if(!(stoi(_p.substr(0,8))%111111111))return count;
	return solve(,count+1);
}

int main(){
	int a;
	cin>>a;
	for(auto i=0;i<a;i++){
		string p;cin>>p;
		cout<<solve(p,0)<<endl;
	}

}
