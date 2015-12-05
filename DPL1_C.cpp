#include <iostream>
using namespace std;
int dp[10005];
int main(){
      int n,sum,vs[1005],ws[1005];cin >> n >> sum;
      for (int i = 0;i<n;i++)cin >> vs[i] >> ws[i];
      for (int i = 0;i <= sum;i++)for(int j = 0;j <n;j++)if(i + ws[j] <=sum ) dp[i + ws[j]] = max(dp[i]+vs[j],dp[i+ws[j]]);
      cout << dp[sum] << endl;
