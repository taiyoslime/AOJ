#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
      int w,n,fx,fy,tx,ty,solve=0,i=1;
      cin>>w>>w>>n>>tx>>ty;
      for(;i<n;i++){
            fx=tx,fy=ty;
            cin>>tx>>ty;
            solve+=((tx-fx)*(ty-fy)>0)?max(abs(tx-fx),abs(ty-fy)):(abs(tx-fx)+abs(ty-fy));
      }
      cout<<solve<<endl;
}
