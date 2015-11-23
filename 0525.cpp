#include <iostream>
using namespace std;
int a,b,ans = -1,map[10003][13],table[10003];
int rmax(int _array[]){
      int ptable[13],ans = 0,count;
      for(int i = 0;i < b;i++){
            count = 0;
            for(int j= 0;j<a;j++){
                  if(_array[j] == 1)
                        ptable[j] = map[j][i];
                  else
                        ptable[j] = map[j][i]^1;
                  if(ptable[j]) count++;
            }
            ans += max(count , a-count);
      }
      cout << ans << endl;
      return ans;
}
void dfs(int array[],int num){
      if(num == a){
            ans = max(ans,rmax(array));
            return ;
      }
      array[num] = 0;
      dfs(array,num+1);
      array[num] = 1;
      dfs(array,num+1);
}
int main(){
      while(1){

            cin >> a >> b;
            if(!a&&!b)return 0;
            for(int i = 0 ; i < a;i++){
                  for(int j = 0;j<b;j++)
                        cin >> map[i][j];
            }
      dfs(table,0);
      cout <<endl;
      cout << ans << endl;
      }
}
