#include <iostream>
#include <string>
using namespace std;
string str,tmp;
int solve(string judge){
      int t = judge.length();
      for(int i=0;i<t;i++){
            if(str[0]!=judge[i])continue;
            for(int j=i+1;j<t;j++){
                  if(str[1]!=judge[j])continue;
                  for(int k=2;;k++){
                        if(k==str.length())return 1;
                        if(i+(j-i)*k>=t||str[k]!=judge[i+(j-i)*k])break;
                  }
            }
      }
      return 0;
}
int main(){
      int x,ctn = 0;
      cin>>x>>str;
      for (int i = 0;i < x ; i++){
            cin >> tmp;
            ctn += solve(tmp);
      }
      cout<<ctn<<endl;
}
