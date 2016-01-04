//TODO Bitで塁を表現

#include <iostream>
#include <string>
using namespace std;
int solve(){
    int base[3],out=0,point=0;
    for(int a=0;a<3;a++)base[a]=0;
    string key;
    while(out!=3){
        cin>>key;
        if(key=="HIT"){
            if(base[2])point++;
            base[2]=base[1];
            base[1]=base[0];
            base[0]=1;
        }else if(key=="HOMERUN"){
            for(int a=0;a<3;a++)if(base[a]){point++;base[a]=0;}
        }else if (key=="OUT")out++;
    }
    return point;
}

int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++)cout<<solve()<<endl;
}
