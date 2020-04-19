#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> set;
    int n, as, bs;
    string q, s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> q >> s;
        if (q == "insert"){
            set.insert(s);
        } else if (q == "find"){
            bs = set.size();
            set.insert(s);
            as = set.size();
            if (bs == as){
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
                set.erase(s);
            }
        }
    }
}