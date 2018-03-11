#include <bits/stdc++.h>
using namespace std;
#define r(z,x) for(int z=0;z<x;z++)
string st="mcxi";
int a,u;
string b,c;
int dec(string s){

}
string enc(int a){
	string e="";
	r(i,4)(u=a%(10*(3-i))< 2)?i=0:e+=st[i];
}
int main(){cin>>a;
	r(i,a)cin>>b>>c,cout<<enc(dec(b)+dec(c))<<endl;
}
 
