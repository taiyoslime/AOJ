#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K,dp[10001],h[10001];
    fill(dp,dp+10001,1e9);
    dp[0] = 0;
    cin >> N >> K;
    for (int i=0;i<N;i++) cin >> h[i];
    for (int i=0;i<N;i++){
        for (int k=1; k<=K;k++){
            if (i + k < N) {
                dp[i + k] = min(abs(h[i+k] - h[i]) + dp[i], dp[i+k]);
            }
        }
    }
    cout << dp[N-1] << endl;
}
