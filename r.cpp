//弟のサイエンスグランプリの問題をゴリ押しで解いた結果
#include <iostream>
using namespace std;
int gcd(int m, int n){
      while(m!=n){
  		if (m>n) m = m - n;
  		else n = n - m;
  	}
  	return m;
}
int lcm(int m, int n){
      return ((m/gcd(m, n))*n);
}
int main(){
      int a=29,b=1;
      while(a+2028!=100000){
            a++;
            b++;
            if(((lcm(a,b))% (gcd(a,b))) == 0 && ((lcm(a,b))/ (gcd(a,b)))<10&&lcm(a,b)>0/*オーバーフロー防止w*/)cout <<"ans:"<<b+2026<<endl<<(lcm(a,b))<<' '<<(gcd(a,b))<<endl      ;
      }

}
