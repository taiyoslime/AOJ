#include <iostream>
using namespace std;
int main(){
    char ans='A',ch[3];
    while(cin>>ch)if(ch[0]==ans||ch[2]==ans)ans=(ch[0]==ans?ch[2]:ch[0]);
    cout<<ans<<endl;
}
