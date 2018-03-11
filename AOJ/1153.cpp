#include <bits/stdc++.h>
using namespace std;
#define r(w,e) for(int w=0;w<e;w++)
int main(){
	int a,b,_a[100],_b[100],d,y,z;
	TOP:while(cin>>a>>b,a+b){
		y=z=0;r(i,a)cin>>_a[i],y+=_a[i];r(i,b)cin>>_b[i],z+=_b[i];
		if((d=y-z)%2!=0){cout<<"-1"<<endl;goto TOP;}d/=2;
		r(p,100)r(i,a)if(_a[i]==p)r(j,b)if(_b[j]==p-d){cout<<_a[i]<<" "<<_b[j]<<endl;goto TOP; }
		cout<<"-1"<<endl;
	}
}
