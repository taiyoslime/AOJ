//なんか同じコインは一つまでしか使えないって勘違いしてたみたい

#include <iostream>
#define INF 100000000;
using namespace std;
int dp[23][50003],sum,num;
int main(){
      int ws[23];
      cin >> sum >> num;
      for (int i=0;i<num;i++)
            cin >> ws[i];
      for (int i=0;i<=num;i++){
            for (int j=1;j<=sum;j++)
                  dp[i][j] = INF;
      }
      for (int i=1;i<=num;i++){
            for (int j=0;j<=sum;j++){
                  if(j >= ws[i-1]) dp[i][j] = min(dp[i-1][j],dp[i-1][j - ws[i-1]]+ 1);
                  else dp[i][j] = dp[i-1][j];
            }
      }
      for (int i = 0;i <= num ; i ++ ){
            for (int j=0;j<= sum;j++)cout << dp[i][j] << ' ';
            cout << endl;
      }
      cout << dp[num][sum] << endl;
}
