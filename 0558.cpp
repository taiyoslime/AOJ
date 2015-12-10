#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int,int> P;

int main(){
      //declare
      int w,h,n,solve=0;
      P cheese[9];
      int dx[] = {0,1,-1,0},dy[]={1,0,0,-1};
      queue<P> que;
      cin >> h>> w>> n;
      char d[h][w];
      int dis[h][w];

      //input
      for(int i=0;i<h;i++)
      {
            for(int j=0;j<w;j++)
            {
                  cin>>d[i][j];
                  if('1'<=d[i][j]&&'9'>=d[i][j])
                        cheese[d[i][j]-'0'-1] = make_pair(i,j);
            }
      }

      //solve
      for(int i=0;i<n;i++)
      {
            for(int a=0;a<h;a++)for(int b=0;b<w;b++)dis[a][b]=-1;
            dis[cheese[i].first][cheese[i].second]=0;
            que.push(cheese[i]);
            while(!que.empty())
            {
                  P p = que.front();
                  que.pop();

            }


      }



}
