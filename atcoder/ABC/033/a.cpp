#include <iostream>
using namespace std;
int main(){
    char ch,tmp;
    bool flag=false;
    cin>>ch;
    for(int i=0;i<3;i++){cin>>tmp;if(tmp!=ch)flag=true;}
    cout<<(flag?"DIFFERENT":"SAME")<<endl;
}
