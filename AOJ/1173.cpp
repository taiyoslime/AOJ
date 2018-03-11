#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	G:
	while(getline(cin,s),s!="."){
		stack<char> p;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('||s[i]=='[')p.push(s[i]);
			if(s[i]==')'){if(p.empty()||p.top()!='('){cout<<"no"<<endl;goto G;}p.pop();}
			if(s[i]==']'){if(p.empty()||p.top()!='['){cout<<"no"<<endl;goto G;}p.pop();}
		}
		cout<<(p.empty()?"yes":"no")<<endl;
	}

}
