#include <bits/stdc++.h>
using namespace std;
int main(){
      string s,nmax,gmax;
      map<string,int> m;
      int nm = -1, gm = -1;
      while(cin >> s){
            if(nm < (int)s.length()){
                  nm = (int)s.length();
                  nmax = s;
            }
            if(m.count(s))m[s]++;
            else m[s] = 0;
      }
      for(auto it = m.begin(); it != m.end(); it++){
            if(gm < it->second){
                  gm = it->second;
                  gmax = it->first;
            }
      }
      cout <<gmax<<' '<<nmax<<endl;
}
