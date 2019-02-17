#include <iostream>
#include <string>
using namespace std;
int main(){
    int count = 0,pos=0;
    bool flag=false;
    string s;
    cin >> s;
    while(pos<(int)s.length()){
        if(s[pos]=='0')flag = true;
        pos++;
        if (s[pos]=='+' || pos==(int)s.length()){
            if(!flag)count++;
            flag = false;
        }
        pos++;
    }
    cout << count << endl;
}
