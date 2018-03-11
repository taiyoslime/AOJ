#include <iostream>
using namespace std;
int main(){
      int a,i;
      while(cin>>a){
            for(i=0;i<=9;i++){
                  if(a&1<<i){
                        cout<<(1<<i);
                        if(a<2<<i)break;
                        cout<<' ';
                  }
            }
            cout<<endl;
      }
}
