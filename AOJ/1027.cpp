#include <iostream>
using namespace std;
int main(){
    int s,n,t,i;
    while(cin>>n&&n){
        s=0;
        for(i=0;i<n*(n-1)/2;i++){cin>>t;s+=t;}
        cout<<s/(n-1)<<endl;
    }
}
