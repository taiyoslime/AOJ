#include <iostream>
using namespace std;
char flag[60][60];
int main() {
      int solve_=0,w,h,i,j,k,l;
      cin>>h>>w;
      for(i=0;i<h;i++)for(j=0;j<w;j++)cin>>flag[i][j];
      for(i=0;i<w;i++){
            if(flag[0][i]!='W')solve_++;
            if(flag[h-1][i]!='R')solve_++;
      }
      int solve=1400000000;
      for(i=0;i<h-2;i++){
            for(j=0;j<h-2;j++){
                  int tmp = 0;
                  if(i+j>w-2)continue;
                  for(k=0;k<i;k++)for(l=0;l<w;l++)if(flag[1+k][l]!='W')tmp++;
                  for(k=0;k<j;k++)for(l=0;l<w;l++)if(flag[h-(2+k)][l]!='R')tmp++;
                  for(k=0;k<h-2-i-j;k++)for(l=0;l<w;l++)if(flag[1+i+k][l]!='B')tmp++;
                  if(solve>tmp)solve=tmp;
            }
      }
      cout<<solve+solve_<<endl;
}
