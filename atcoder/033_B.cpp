#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,a,sum=0,topi=-1;
    string tmp,tops;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> tmp >> a;
        sum += a;
        if(a>topi){
            topi = a;
            tops = tmp;
        }
    }
    if(sum/2<topi)cout << tops << endl;
    else cout << "atcoder" << endl;
}
