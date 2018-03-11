#include <bits/stdc++.h>
using namespace std;
char maze[21][21];
#define r(z,x) for(int z=0;z<x;z++)
int ans,a,b;
void bfs(int x,int y){
	int dx[4]={0,-1,0,1},dy[4]={1,0,-1,0};
	maze[x][y]='#',ans++;
	r(i,4)if(maze[x+dx[i]][y+dy[i]]=='.')bfs(x+dx[i],y+dy[i]);
}
int main(){
	while(cin>>a>>b,a||b){
		ans=0;
		fill(maze[0],maze[20],'#');
		r(i,b)r(j,a)cin>>maze[i][j];
		r(i,b)r(j,a)if(maze[i][j]=='@')bfs(i,j),cout<<ans<<endl;
	}
}
