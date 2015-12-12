#include <iostream>
using namespace std;
int n,k,i,x,y;
int main(){
      cin>>n>>k;
      for(i=0;i<k;i++){
            cin>>x>>y;
            if(x+y<=n)cout<<((x>y)?((y+2)%3+1):((x+2)%3+1))<<endl;
            else cout<<((x<y)?((y+2)%3+1):((x+2)%3+1))<<endl;
      }

}
