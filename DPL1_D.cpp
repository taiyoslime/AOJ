#include <iostream>
#include <algorithm>
#define INF -1
using namespace std;
int dp[100005];
int main(){
      int n,tmp;
      cin >> n;
      fill(dp,sizeof(dp),INF);
      for (int i = 0;i < n; i++)
      {
            cin >> tmp;
            *lower_bound(dp, dp + n,tmp) = tmp;
      }
      cout << *lower_bound(dp,dp+n,INF);
}
