#include <iostream>
using namespace std;
int ans[105],tg[105],n,k,tmp;
int main(){
      cin>>n>>k;
      for(int i=0;i<k;i++)cin>>tg[i];
      for(int i=0;i<k;i++){
            int ctn=0;
            for(int j=0;j<n;j++){
                  cin>>tmp;
                  if(tmp==tg[i]){
                        ans[j]++;
                        ctn++;
                  }
            }
            ans[tg[i]-1]+=n-ctn;
      }
      for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}
