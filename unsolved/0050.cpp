//まだ終わってない
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;getline(cin,s);
	while(s.find("apple")!=string::npos&&s.find("peach")!=string::npos){
		s.replace(s.find("apple"),5,"peach");
		s.replace(s.find("peach"),5,"apple");
	}
	cout<<s<<endl;
}
