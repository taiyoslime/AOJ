#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,g[200002][2],is_del[200002];
vector<int> v[200002],u;
string s;

int main (){
    cin >> n >> m;
    cin >> s;
    for (int i = 0; i < m ; i++ ){
        cin >> a >> b ;
        v[a].push_back(b);
        v[b].push_back(a);
        g[a][s[b - 1] == 'A' ] ++;
        g[b][s[a - 1] == 'A' ] ++;
    }
    for(int i=1;i<=n;i++) {
        if(!g[i][0] || !g[i][1]){
            is_del[i] = 1;
            u.push_back(i);
        }
    }
    for (int i=0;i<u.size();i++){
        for(auto j:v[u[i]]){
            g[j][ s[ u[i] - 1 ] == 'A' ] -- ;
            if(!(g[j][ s[ u[i] - 1 ] == 'A' ]) && !is_del[j]){
                u.push_back(j);
                is_del[j] = 1;
            }
        }
    }
    if (u.size() != n){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
