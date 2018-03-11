#include <iostream>
using namespace std;
int main(){
    char d[101][101],ch;int w,h,i,j;
    while(cin>>h>>w,h){
        for(i=0;i<h;i++)for(j=0;j<w;j++)cin>>d[i][j];i=j=0;
        while(d[i][j]!='.'&&d[i][j]!='X'){
            ch=d[i][j];d[i][j]='X';
            switch (ch){
                case '>':j++;break;
                case '<':j--;break;
                case 'v':i++;break;
                case '^':i--;
            }
        }(d[i][j]=='.')?(cout<<j<<" "<<i<<endl):(cout<<"LOOP"<<endl);
    }
}
