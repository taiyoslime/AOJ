#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int dp[1005][10005];
int main(){
      int w,n,v1,w1,solve,solve_,count = 0;
      do{
            cin >> w;
            if(!w)break;
            cin >> n;

            count++;
            solve =solve_=  -1;
            for(int i = 0;i<1005;i++)for(int j = 0;j<10005;j++)dp[i][j] = -1;
            dp[0][0] = 0;
            for(int i =0 ;i< n;i++)
            {
                  scanf("%d,%d",&v1,&w1);
                  for(int j = 0;j<=w;j++)
                  {
                        if(dp[i][j]!=-1)
                        {
                              dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
                              dp[i+1][j+w1] = max(dp[i][j]+v1,dp[i+1][j+w1]);
                        }
                  }
            }
            for(int i = 0;i<=w;i++){
                  if(dp[n][i]>solve){
                        solve = dp[n][i];
                        solve_ = i;
                  }
            }
            cout << "Case "<<count << ':'<<endl<< solve<<endl<<solve_<<endl;



      }while(1);
}
