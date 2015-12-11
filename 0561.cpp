#include <iostream>
#include <vector>
using namespace std;
vector<int> books[10];
int main(){
      int n,k,i,j,tm1,tm2;
      cin >> n >> k;
      for(i=0;i<n;i++){
            cin >> tm1>>tm2;
            books[tm2].push_back(tm1);
      }
      for(i=0;i<10;i++)sort(books[i].begin(),books[i].end());

      int dp[10][2005];
      for(i=0;i<10;i++){
            for(j=0;j<=k;j++){



            }

      }

}
