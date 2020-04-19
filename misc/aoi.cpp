#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, ans = 0;
    string s;
    map<string, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        mp[s]++;
    }
    cin >> m;
    for (int j = 0; j < m; j++){
        cin >> s;
        mp[s]--;
    }
    for(auto e : mp) ans = max(ans, e.second);
    cout << ans << endl;
}