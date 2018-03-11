#include <iostream>
using namespace std;
char ch[12][12];
int dh[]={1,0,-1,0},dw[]={0,-1,0,1};
void dfs(int h,int w){
	ch[h][w]='0';for(int i=0;i<4;i++){
		int nx=h+dh[i],ny=w+dw[i];
		if(nx>=0&&nx<12&&ny>=0&&ny<12&&ch[nx][ny]=='1')dfs(nx,ny);
	}return ;
}
int main(){
	while(cin>>ch[0]){
		int solve=0;
		for(int i=1;i<12;i++)cin>>ch[i];
		for(int i=0;i<12;i++)for(int j= 0;j<12;j++)if(ch[i][j]=='1'){dfs(i,j);solve++;}
		cout << solve << endl;
	  }
}
