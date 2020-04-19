#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, qt, t, ct = 0;
    string tn;
    queue<tuple<string, int>> q;
    cin >> n >> qt;
    for (int i = 0; i < n ; i++) {
        cin >> tn >> t;
        q.push(make_tuple(tn, t));
    }

    while(!q.empty()){
        tn = get<0>(q.front());
        t = get<1>(q.front());
        q.pop();
        if (t <= qt){
            cout << tn << " " << ct + t << endl;
            ct += t;
        } else {
            q.push(make_tuple(tn, t - qt));
            ct += qt;
        }
    }
}