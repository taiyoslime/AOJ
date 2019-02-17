#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N,W,w,v;
    array<long long,100001> dp;
    dp.fill(1e9+1);
    dp[0] = 0;
    cin >> N >> W;
    for (int i=0;i<N;i++){
        cin >> w >> v;
        for (int j=100000;j >= v; j--){
            if (dp[j-v] != 1e9+1){
                dp[j] = min(dp[j-v]+w,dp[j]);
            }
        }
    }
    v = -1;
    for(long long i=0;i<100001;i++){
        if (dp[i] <= W)
            v = max(v,i);
    }
    cout << v << endl;
}
