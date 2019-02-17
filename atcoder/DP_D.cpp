#include <bits/stdc++.h>
using namespace std;
int main(){
    long long  N,W,w,v,dp[100001];
    fill(dp,dp+100001,0);
    dp[0] = 0;
    cin >> N >> W;
    for (int i=0;i<N;i++){
        cin >> w >> v;
        for (int j=W;j >= w; j--){
            dp[j] = max(dp[j-w]+v,dp[j]);
        }
    }
    cout << dp[W] << endl;
}
