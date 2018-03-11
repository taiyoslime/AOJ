#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll i=0,t,n;
    cin>>n;
    map<ll,ll> m;
    for(;i<n;i++)cin>>t,m.insert(make_pair(t,i+1));
    for(auto it=m.rbegin();it!=m.rend();it++)cout<<(*it).second<<endl;
}
