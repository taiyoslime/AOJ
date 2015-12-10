/*
 * BFS(幅優先探索)問題を解くときに、速度を上げるためにScaffold的なのを作っておきました
 *
 * Part 1 表与えられチックなやつ
 *
 * copyright (C) 2015 Taiyo Mizuhashi. All rights reserved.
 *
 */

//header files required
#include <iostream>
#include <queue>

using namespace std;

typedef pair<int,int> P;


int main(){

      int   w, //width
            h, //height
            dx[]={0,1,-1,0},dy[]={1,0,0,-1} //変化率
            ;


      //input (h,w)
      cin >> h >> w;

      // input保存用
      char d[h][w];　

      // 距離など保存用
      int dis[h][w];

      //imput (表)
      for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>d[i][j];

      queue<P> que;

      //dis配列初期化
      for(int a=0;a<h;a++)for(int b=0;b<w;b++)dis[a][b]=-1;

      //origin(出発元)の初期化
      dis[/*初期位置.x*/][/*初期位置.y*/]=0;

      que.push(make_pair(/*初期状態*/));

      while(!que.empty()){
            P p = que.front();que.pop();

            if(p == /*(pair ゴールの座標)*/){
                        /* 答えの処理 */
                        break;
            }

            for(int j = 0;j < dx.size();j++)
            {
                  int nx = p.first + dx[j],ny = p.second+ dy[j];

                  if(0<=nx&&nx<h&&0<=ny&&ny<w&&d[nx][ny]!=/*障害物的なサムシング*/&&dis[nx][ny]==-1)
                  {
                              dis[nx][ny] = dis[p.first][p.second]+1/*←重み*/;
                              que.push(make_pair(nx,ny));
                  }
                  
            }



      }


      cout << /*答え*/ << endl;
}
