#include <bits/stdc++.h>
#define INF 1e9;
using namespace std;

int main(){
    int n,m,a,b,c,d,s,g,v,p;
    int co[22][22];
    cin >> n >> m;
    for (int i = 0;i < 22; i++)for (int j = 0;j < 22;j++)co[i][j] = INF;
    for (int i = 0;i < m; i++){
        scanf("%d,%d,%d,%d",&a,&b,&c,&d);
        co[a-1][b-1] = c;
        co[b-1][a-1] = d;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(co[j][i]+co[i][k] < co[j][k]) co[j][k] = co[j][i]+co[i][k];
            }
        }
    }
    scanf("%d,%d,%d,%d",&s,&g,&v,&p);
    cout << v-p-co[s-1][g-1]-co[g-1][s-1] << endl;;
}