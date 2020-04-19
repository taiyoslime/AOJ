#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> q;
    string s;
    int n;
    for(;;){
        cin >> s;
        if (s == "insert"){
            cin >> n;
            q.push(n);
        } else if (s == "extract"){
            cout << q.top() << endl;
            q.pop();
        } else if (s == "end"){
            break;
        }
    }
}