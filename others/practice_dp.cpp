#include <iostream>
using namespace std;
int maxw = 10;
int dp[6][11];
int ret = 0;
int main(){
      int ws[5] = { 3,4,1,2,3 };
      int ps[5] = { 2,3,2,3,6 };

      for (int i=0;i<=5;i++){
            for(int j=0;j<=maxw;j++){
                  if(j + ws[i] <= maxw){
                        dp[i+1][j+ws[i]] = max(dp[i+1][j+ws[i]],dp[i][j] + ps[i]);
                        ret = max(dp[i+1][j+ws[i]],ret);
                  }
            }
      }
      for(int i= 0;i<6;i++){
            for(int j=0;j<11;j++)cout<<dp[i][j]<<' ';
                  cout<<endl;
      }
      cout << ret << endl;
}
