#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int a;
    string s;
    set<string> st;
    cin>>s>>a;
    for(int i=0;i<(int)s.length()-a+1;i++)
    {
        string str;
        for(int j=0;j<a;j++)str+=s[i+j];
        st.insert(str);
    }
    cout<<st.size()<<endl;
}
