#include <bits/stdc++.h>
using namespace std;
#define r(a) for(int a=0;a<n;a++)
int main(){
	char r[50][50];int n;cin>>n;
	r(i)r(j)cin>>r[i][j];
	r(i){r(j)cout<<r[n-j-1][i];cout<<endl;}
}
