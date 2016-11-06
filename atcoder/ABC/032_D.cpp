#include <iostream>
using namespace std;
long long n,w,dp[205][10000];
int main(){
    cin>>n>>w;
    for(long long i=0;i<n;i++)for(long long j=0;j<w;j++)dp[i][j]=-1;
    dp[0][0]=0;
    for(long long i=0;i<n;i++){
        long long _v,_w;
        cin>>_v>>_w;
        for(long long j=0;j<w;j++){
            if(dp[i][j]!=-1){
            if(j+_w>w){
                dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
            }else{
                dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
                dp[i+1][j+_w] = max(dp[i+1][j+_w],dp[i][j]+_v);
            }
        }
        }
    }
    cout<<dp[n][w]<<endl;
}
