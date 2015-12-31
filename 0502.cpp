#include <iostream>
#include <string>
using namespace std;
int main(){
      string str;
      int tmp;
      while(cin>>tmp&&tmp){
      int d[]={1,5,3,2,4,6},ctn=1;
      for(int i=0;i<tmp;i++){

            cin>>str;
            switch (str[0]) {
                  case 'N':
                        swap(d[0],d[3]);
                        swap(d[3],d[5]);
                        swap(d[5],d[1]);
                        break;
                  case 'E':
                        swap(d[0],d[4]);
                        swap(d[4],d[5]);
                        swap(d[5],d[2]);
                        break;
                  case 'W':
                        swap(d[2],d[5]);
                        swap(d[5],d[4]);
                        swap(d[4],d[0]);
                        break;
                  case 'S':
                        swap(d[0],d[1]);
                        swap(d[1],d[5]);
                        swap(d[5],d[3]);
                        break;
                  case 'R':
                        swap(d[1],d[2]);
                        swap(d[1],d[4]);
                        swap(d[3],d[4]);
                        break;
                  case 'L':
                        swap(d[3],d[4]);
                        swap(d[4],d[1]);
                        swap(d[1],d[2]);
                        break;
            }
            ctn+=d[0];
      }
      cout <<ctn <<endl;
}
}
