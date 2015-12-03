#include <iostream>
#define INF 99;
using namespace std;
int dp[23][50003];
int main(){
      int sum,num,ws[23];
      cin >> sum >> num;
      for (int i = 0;i<num;i++)
            cin >> ws[i];
      //init
      for (int i = 0;i <= num ; i ++ )
      {
            for (int j = 1;  j  <= sum ; j ++ )
                  dp[i][j] = INF;
      }
       for (int i = 1;i <= num ; i++ ){
            for (int j = 0; j <= sum ; j++ ){
                  if(j >= ws[i-1])
                        dp[i][j] = min(dp[i-1][j],dp[i-1][j - ws[i-1]]+ 1);
                  else
                        dp[i][j] = dp[i-1][j];
            }
      }


/*DEBUG

       for (int i = 0;i <= num ; i ++ )
            {
                  for (int j = 0;  j  <= sum ; j ++ )
                  {
                        cout << dp[i][j] << ' ';
                  }
                  cout << endl;
      }

      */
      cout << dp[num][sum] << endl;
}
