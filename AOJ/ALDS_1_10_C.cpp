#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int q=0;q<n;q++){
        string x,y;
        cin >>x >> y;
        int dp[1002][1002];
        memset(dp,-1, sizeof(dp));
        dp[0][0] = 0;
        for(int i=0;i<x.size()+1;i++){
            for(int j=0;j<y.size()+1;j++){
                if (i < x.size() && j < y.size() && x[i] == y[j]){
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + 1);
                }
                dp[i][j+1] = max(dp[i][j+1],dp[i][j]);
                dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
            }
        }
        cout << dp[x.size()][y.size()] << endl;
    }
}