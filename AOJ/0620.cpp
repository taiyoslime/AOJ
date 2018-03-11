#include <iostream>
using namespace std;
int main() {
      int n,m,zec[100],j;
      cin >>n>>m;
      for(int i=1;i<=n;i++)cin>>zec[i];
      for(int i=1;i<=m;i++)for(j=1;j<n;j++)if(zec[j]%i>zec[j+1]%i)swap(zec[j+1],zec[j]);
      for(int i=1;i<=n;i++)cout<<zec[i]<<endl;
}
