#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	map<string,vector<int> > m;
	map<string,vector<int> >::iterator it;
	vector<int>::iterator itv;
	string s;int a;
	while(cin>>s){
		cin>>a;
		m[s].push_back(a);
	}
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<endl;
		sort(it->second.begin(),it->second.end());
		for(itv=it->second.begin();itv!=it->second.end() - 1;itv++)cout << *itv << ' ';
		cout << *itv << endl;
	}
}
