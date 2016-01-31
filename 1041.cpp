#include <iostream>
using namespace std;
int main(){
    int a,c,tmp;
    while(cin>>a,a){
        c=0;
        for(int i=0;i<a/4;i++){
            cin>>tmp;
            c+=tmp;
        }
        cout<<c<<endl;
    }
}
