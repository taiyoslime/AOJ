#include <iostream>
#include <string>
#define s(w,x,y,z) swap(d[w],d[x]);swap(d[x],d[y]);swap(d[y],d[z]);break;
using namespace std;
int main(){
      string str;int tmp,i;
      while(cin>>tmp&&tmp){
            int d[]={1,5,3,2,4,6},ctn=1;
            for(i=0;i<tmp;i++){
                  cin>>str;
                  switch(str[0]){
                        case 'N':s(0,3,5,1);
                        case 'E':s(0,4,5,2);
                        case 'W':s(2,5,4,0);
                        case 'S':s(0,1,5,3);
                        case 'R':s(2,1,4,3);
                        case 'L':s(3,4,1,2);
                  }
                  ctn+=d[0];
            }
            cout<<ctn<<endl;
      }
}
