#include <bits/stdc++.h>
using namespace std;
int main(){
	int p[4];string s;
	cin>>s>>p[0]>>p[1]>>p[2]>>p[3];
	reverse(begin(p),end(p));
	for(auto a:p)s.insert(a,"\"");
	cout<<s<<endl;
}
