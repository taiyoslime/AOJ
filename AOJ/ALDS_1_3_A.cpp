#include <bits/stdc++.h>
using namespace std;
int main(){
    string ch;
    int a, b;
    stack<int> st;
    while(cin >> ch){
        switch(ch[0]){
            case '+':
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(a+b);
                break;
            case '-':
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(b-a);
                break;
            case '*':
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(a*b);
                break;
            case '/':
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(b/a);
                break;
            default:
                st.push(atoi(ch.c_str()));
        }
    }
    cout<<st.top()<<endl;
}
