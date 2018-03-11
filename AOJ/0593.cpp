#include <iostream>
#include <algorithm>
using namespace std;
int n,m,d[1005],t,i,j,ans[1005];
int main(){
      cin>>n>>m;
      for(i=0;i<n;i++)cin>>d[i];
      for(i=0;i<m;i++){
            cin>>t;
            for(j=0;j<n;j++)if(t>=d[j]){ans[j]++;break;}
      }
      t=-1;
      for(i=0;i<n;i++)if(t<ans[i]){t=ans[i];m=i+1;}
      cout<<m<<endl;
}
