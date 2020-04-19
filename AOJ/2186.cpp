#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int q=0;q<n;q++){
        int m,x,y,dp[20][20]={0};
        cin >> x >> y >> m;
        array<tuple<int,int,int,int>, 100> mat;
        for (int j=0;j<m;j++){
            int x1,y1,x2,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 == x2) {
                if (y2 < y1)swap(y1,y2);
            } else {
                if (x2 < x1)swap(x1,x2);
            }
            mat[j] = make_tuple(x1,y1,x2,y2);
        }
        for (int i=0; i<x+1; i++){
            for(int j=0; j<y+1; j++){
                if (i == 0 && j == 0){
                    dp[i][j] = 1;
                } else {
                    bool _x=1,_y=1;
                    for(int k=0;k<m;k++){
                        if (get<2>(mat[k]) == i && get<3>(mat[k]) == j){
                            if (get<0>(mat[k]) == i-1 && get<1>(mat[k]) == j ) _x=0;
                            if (get<0>(mat[k]) == i && get<1>(mat[k]) == j-1 ) _y=0;
                        }
                    }
                    dp[i][j] += (_x && i ? dp[i-1][j] : 0) + (_y && j != 0 ? dp[i][j-1] : 0 );
                }
            }
        }
        if (dp[x][y] == 0) cout << "Miserable Hokusai!" << endl;
        else cout << dp[x][y] << endl;
    }
}