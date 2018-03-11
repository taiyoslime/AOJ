#include <cstdio>
using namespace std;
int main(){
      int a,b,c,x=0,y=0;
      while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
            if(a*a+b*b==c*c)x++;
            if(a==b)y++;
      }
      printf("%d\n%d\n",x,y);
}
