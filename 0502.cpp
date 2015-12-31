#include <iostream>
#include <string>
using namespace std;
int main(){
      int d[6]={1,5,3,2,4,6}; //
      int top,front,ctn = 0,tmp;
      string str;
      cin>>tmp;
      for(int i=0;i<tmp;i++){
            cin >> str;
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
                        break;
                  case 'R':
                        break;
                  case 'L':
                        break;
            }
      }

}
