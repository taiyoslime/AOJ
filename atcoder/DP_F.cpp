/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,a,b;
    cin >> s >> t;
    auto dp = vector<vector<string>>(t.length()+1, vector<string>(s.length()+1, ""));
    for (int i=0; i< t.length()+1; i++){
        for (int j=0; j< s.length()+1; j++){
            if (s[j] == t[i] and j != s.length() and i != t.length())
                dp[i+1][j+1] = (a = dp[i+1][j+1]).length() > (b = dp[i][j] + s[j]).length() ? a : b;
            if (j != s.length())
                dp[i][j+1] = (a = dp[i][j]).length() > (b = dp[i][j+1]).length() ? a : b;
            if (i != t.length())
                dp[i+1][j] = (a = dp[i][j]).length() > (b = dp[i+1][j]).length() ? a : b;
        }
    }
     cout << dp[t.length()][s.length()] << endl;
}
*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,ans="";
    long long i,j;
    cin >> s >> t;
    auto dp = vector<vector<int>>(t.length()+1, vector<int>(s.length() + 1, 0));
    for (i=0; i< t.length()+1; i++){
        for (j=0; j< s.length()+1; j++){
            if (s[j] == t[i] and j != s.length() and i != t.length())
                dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j] + 1);
            if (j != s.length())
                dp[i][j+1] = max(dp[i][j], dp[i][j+1]);
            if (i != t.length())
                dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
        }
    }

    i = t.length();
    j = s.length();
    while ( ans.length() != dp[t.length()][s.length()] ){
        if (dp[i-1][j-1] + 1 == dp[i][j] && s[j-1] == t[i-1]){
            ans = s[j-1] + ans;
            i--;j--;
        } else if(dp[i-1][j] <= dp[i][j-1])
            j--;
        else
            i--;
    }
    cout << ans << endl;
}
