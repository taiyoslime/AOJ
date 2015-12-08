#include <iostream>
#include <algorithm>
using namespace std;
#define INF 10000000000000
int main(){
      int n,m,d[1005],c[1005];
      long long dp[1005][1005];
      cin >> n >> m;
      for(int i = 0; i < n;i++)cin >> d[i];
      for(int i = 0; i < m;i++)cin >> c[i];
      for(int i = 0;i <= m;i++)for(int j = 0;j<=n;j++)dp[i][j] = INF;
      dp[0][0] = 0;
      for(int i = 0; i < m;i++){
            for (int j = 0;j <= n;j++){
                  if(dp[i][j]!=INF){
                        dp[i+1][j] = min(dp[i][j],dp[i+1][j]);
                        dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j]+d[j]*c[i]);
                  }
            }
      }
      cout << dp[m][n] << endl;
}
