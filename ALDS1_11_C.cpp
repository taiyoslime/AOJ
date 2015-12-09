#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int d[128][128];
int main()
{
      int n,m,row,t;
      cin >> n;
      for(int i= 0;i<n;i++){
            cin >> row>>m;
            for(int j = 0;j<m;j++){
                  cin >> t;
                  cin >> d[row][t];
                  d[row][t] = d[t][row];
            }
      }
      


}
