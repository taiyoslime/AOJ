#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#define FLAG -1
using namespace std;
typedef pair<int,int> P;
int main(){
      int h,w,dh[] = {1,1,1,0,-1,-1,-1,0}, dw[] = {1,0,-1,-1,-1,0,1,1},ctn,i,j;
      int solve = -2 ;
      cin >> h >> w;
      queue<P> que,tmp;
      char d[h][w];
      for(i=0;i<h;i++){
            for(j=0;j<w;j++)
            {
                  cin >> d[i][j];
                  if('1'<=d[i][j]&&'9'>=d[i][j])
                        que.push(make_pair(i,j));
            }
      }

      que.push(make_pair(FLAG,FLAG));
      for(;;){
            solve++;
            map<P,bool> m;
            for(;;){
                  //cout << que.size()<<endl;
                  P p = que.front();
                  que.pop();
                  if(p.first==FLAG)
                  {//cout <<" break "<<endl<<endl;
                  break;
                  }
                  ctn = 0;
                  for(i = 0;i < 8;i++){
                        if(d[p.first+dh[i]][p.second+dw[i]]=='.')ctn++;
                  }

                  if(ctn >= d[p.first][p.second]-'0'){
                        tmp.push(p);
                        for(j=0;j<8;j++)
                        if(m.count(make_pair(p.first+dh[j],p.second+dw[j]))==0&&d[p.first][p.second]!='.'){
                        que.push(make_pair(p.first+dh[j],p.second+dw[j]));
                        m[make_pair(p.first+dh[j],p.second+dw[j])]=true;
                        }
                  }
            }
            if(tmp.empty())break;
            while(!tmp.empty())
            {
                  d[tmp.front().first][tmp.front().second]='.';
                  tmp.pop();
            }
            /*for(i =0 ;i<h;i++)
            {
                  for(j=0;j<w;j++)cout << d[i][j];
                  cout <<endl;
            }
            */

            que.push(make_pair(FLAG,FLAG));

      }
      cout << solve << endl;
}

/*

5 6
......
.939..
.3428.
.9393.
......

*/
/*

10 10
..........
.99999999.
.9.323239.
.91444449.
.91444449.
.91444449.
.91444449.
.91232329.
.99999999.
..........




*/
