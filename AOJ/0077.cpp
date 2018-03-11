#include <bits/stdc++.h>
using namespace std;
int main(){
	char ch,i;
	while(~(ch=getchar())){
		if(ch=='@'){
			cin>>i>>ch;
			for(int a=0;a<i-'0';a++)cout<<ch;
		} else cout<<ch;
	}
}
