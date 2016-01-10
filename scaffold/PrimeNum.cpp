#include <iostream>
#include <math.h>
#include <map>
using namespace std;
int main(){
      int count=0,tmp,n;
      bool f;
      map<int,bool> flag;

      flag[2] = true;
      for (long long i = 3; i<10000002 + 2;i += 2){
            f = true;
            for(long long j = 3; j < (int)sqrt(i) + 1 ;j += 2){
                  if(i % j == 0){
                        f = false;
                        break;
                  }
            }
            flag[i] = f;
      }
cout<<"end";

      cin >> n;
      for(int i = 0; i < n ; i++){
            cin >> tmp;
            if(flag[tmp])count++;
      }
      cout<<count<<endl;
}
