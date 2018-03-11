#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,i=0;
    string s;
    cin>>n;
    cin.ignore();
    for(;i<n;i++){
        getline(cin,s);
        while(s.find("Hoshino")!=string::npos)s.replace(s.find("Hoshino"),7,"Hoshina");
        cout<<s<<endl;
    }
}
