#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> books[10];
int main(){
      int n,k,i,j,tm1,tm2,dp[15][2005];
      cin>>n>>k;
      for(i=0;i<n;i++){
            cin>>tm1>>tm2;
            books[tm2].push_back(tm1);
      }
      for(i=0;i<=10;i++)sort(books[i].begin(),books[i].end());
      for(i=0;i<=10;i++)for(j=0;j<=k;j++)dp[i][j]=-1;
      dp[0][0] = 0;
      for(i=0;i<10;i++){
            for(j=0;j<=k;j++){
                  if(dp[i][j]==-1)continue;
                        int ct = 0;
                        for(int x=1;x<=books[i+1].size();x++){
                              if(j+x>k)break;
                              ct += books[i+1][books[i+1].size()-x];
                              dp[i+1][j+x] = max(dp[i+1][j+x],dp[i][j]+ct+(x-1)*x);
                        }
                        dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
            }
      }
      cout << dp[10][k]<<endl;
}
