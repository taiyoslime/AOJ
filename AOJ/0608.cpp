#include <iostream>
using namespace std;
int main(){
      int a,b,c,d,e;
      cin>>a>>b>>c>>d>>e;
      cout<<min(a*e,b+(e>c?e-c:0)*d)<<endl;
}
