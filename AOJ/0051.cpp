#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m1,m2;
    char d[8];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<8;j++)cin>>d[j];
        sort(d,d+8);
        m1=atoi(d);
        sort(d,d+8,greater<int>());
        m2=atoi(d);
        cout<<m2-m1<<endl;
    }
}
