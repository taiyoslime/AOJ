#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    int ctn=0,i;
    string str,num;
    while(cin>>str){
        for(i=0;i<str.length();i++){
            if(str[i]>='0'&&str[i]<='9')num+=str[i];
            else {
                ctn+=atoi(num.c_str());
                num="";
            }
        }
        ctn+=atoi(num.c_str());
    }
    cout<<ctn<<endl;
}
