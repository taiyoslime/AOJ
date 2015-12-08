#include <bits/stdc++.h>
using namespace std;
long long dp[101][21];
int main(){
      int n;
      cin >> n >> tmp;
      dp[0][0] = tmp;
      for(int i = 1;i<=n-2;i++)
      {
            cin >> tmp;
            for(int j = 0;j <= 20;j++)
            {
                  if(j+tmp<=20)dp[i][j]+=dp[i-1][j+tmp];
                  if(j>=tmp)dp[i][j]+=dp[i-1][j-tmp];
            }

      }
      cin >> tmp;
      cout << dp[n-2][tmp]<<endl;

}
