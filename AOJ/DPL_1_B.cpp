#include <iostream>
using namespace std;
int dp[105][10005];
int main(){
      int n,sum,a,b;
      cin >> n >> sum;
      for (int i = 0;i < n;i++){
            cin >> a >> b;
            for (int j = 0;j<= sum;j++){
                  if(j>=b) dp[i+1][j] = max(dp[i][j],dp[i][j-b]+a);
                  else dp[i+1][j] = dp[i][j];
            }
      }
      cout <<dp[n][sum]<<endl;
}
