#include <iostream>
using namespace std;
int main(){
      int dp[44]={1,1},i=2,n;
      cin >> n;
      for(;i<=n;i++)dp[i]=dp[i-1]+dp[i-2];
      cout << dp[n] << endl;
}
