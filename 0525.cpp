#include <iostream>
using namespace std;
int a,b,ans = -111111,map[10003][13]={0},table[10003] = {0};
int rmax(int _array[]){
      int ptable[13],ans = 0,count;
      for(int i = 0;i < b;i++){
            count = 0;
            for(int j= 0;j<a;j++){
                  if(_array[j] == 0)
                        ptable[j] = map[j][i];
                  else{
                        if(map[j][i] == 1)ptable[j] = 0;
                        else ptable[j] = 1;
                  }
                  if(ptable[j] == 1) count++;
            }
            ans += max(count , a  - count);
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
      while(cin){
            cin >> a >> b;
            for(int i = 0 ; i < a;i++){
                  for(int j = 0;j<b;j++)
                        cin >> map[i][j];
            }
      dfs(table,0);
      cout << ans << endl;
      }

}
