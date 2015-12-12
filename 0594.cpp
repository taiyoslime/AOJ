#include <iostream>
using namespace std;
int main(){
      int w,h,n,fx,fy,tx,ty,solve=0;
      cin>>w>>h>>n;
      cin>>tx>>ty;
      for(int i=1;i<n;i++){
            fx=tx,fy=ty;
            cin>>tx>>ty;
            if((tx-fx>0&&ty-fy>0)||(fx-tx>0&&fy-ty>0))solve+=max(abs(tx-fx),abs(ty-fy));
            else solve+= (abs(tx-fx)+abs(ty-fy));
      }
      cout<<solve<<endl;
}
