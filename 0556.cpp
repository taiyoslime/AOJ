#include <iostream>
using namespace std;
int n,k,i,x,y;
int main(){
      cin>>n>>k;
      for(i=0;i<k;i++){
            cin>>x>>y;
            cout<<(x+y<=n?(x<y?(x+2)%3+1:(y+2)%3+1):(x<y?(n-y)%3+1:(n-x)%3+1))<<endl;
      }
}
