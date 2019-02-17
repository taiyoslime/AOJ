#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 998244353,inv[300001],comb[300001];
int main(){

    ll n,a,b,k,ans=0;
    cin >> n >> a >> b >> k;
    for(ll i=0;i <= n;i++){
        if ((k - a * i) % b ==  0 && (k - a * i)/b <= n){
            ans += comb[i] * comb[(k - a * i)/b];
            ans %= mod;
        } else if (k < a*i) break;
    }
    cout << ans << endl;

}
