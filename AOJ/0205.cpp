#include <iostream>
using namespace std;
int main(){
	int a[5],j,i;
	while(cin>>a[0],a[0]){
		j=0;
		if(!(j & 1<<a[0]))j+=1<<a[0];
		for(i=1;i<5;i++){
			cin>>a[i];
			if(!(j & 1<<a[i]))j+=1<<a[i];
		}
		if(j==14||j==2||j==4||j==8)for(int i=0;i<5;i++)cout<<'3'<<endl;
		else{
			for(int i=0;i<5;i++){
				if(j==10)cout<< ((j-(1<<a[i]))>(1<<a[i])?'2':'1') << endl;
				else cout<< ((j-(1<<a[i]))>(1<<a[i])?'1':'2') << endl;
			}
		}
	}
}
