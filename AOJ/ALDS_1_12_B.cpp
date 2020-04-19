#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, u, k, v, c, l[101][101], ans[101];
    for (int i = 0; i < 101; i++) ans[i] = 1e9;
    ans[0] = 0;
    for (int i = 0; i < 101; i++) for (int j = 0;j < 101; j++)l[i][j] = 1e9;
    queue<int> q;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> u >> k;
        for(int j = 0;j < k; j++){
            cin >> v >> c;
            l[u][v] = c;
        }
    }
    q.push(0);
    while(!q.empty()){
        int _u = q.front();
        q.pop();
        for (int i = 0; i < n; i++){
            if (l[_u][i] != 1e9){
                if (ans[i] > ans[_u] + l[_u][i]){
                    ans[i] = ans[_u] + l[_u][i];
                    q.push(i);
                }
            }
        }
    }
    for (int i = 0 ; i < n; i++) cout << i << " "<< ans[i] << endl;
}
