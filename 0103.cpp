#include <iostream>
#include <string>
using namespace std;
int solve(){
    int base=0,out=0,point=0;
    string key;
    while(out!=3){
        cin>>key;
        if(key=="HIT"){
            if(base&1<<2)point++;
            base<<=1;
            base++;
        }else if(key=="HOMERUN"){
            point++;
            for(int j=0;j<3;j++)if(base&1<<j)point++;
            base=0;
        }else if (key=="OUT")out++;
    }
    return point;
}

int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++)cout<<solve()<<endl;
}
