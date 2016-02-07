#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		for(int a=8;a>=0;a--)for(int i=0;i<=a;i++)s[i]=(char)((s[i]-'0'+s[i+1]-'0')%10+'0');
		cout<<s[0]<<endl;
	}
}
