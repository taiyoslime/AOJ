#include <bits/stdc++.h>
using namespace std;
int main()
{
      int a,b,flag;
      char ch;
      cin>>a>>b;
      for(int i= 0;i<a;i++){
            flag = -1;
            for(int j = 0 ; j < b;j++){
                  scanf(" %c",&ch);
                  if(ch == 'c'){
                        cout << '0';
                        flag = 0;
                  }else{
                        if (flag == -1)cout << flag;
                        else cout << ++flag;
                 }
                  if(j!=b-1)cout << ' ';
            }
            cout<<endl;
      }
}
