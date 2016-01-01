//STLのstack使ったやつは甘え
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
      string ch;
      int stack[150],top=-1;
      while(cin>>ch){
            switch(ch[0]){
                  case '+':
                        stack[top-1]+=stack[top];
                        top--;
                        break;
                  case '-':
                        stack[top-1]-=stack[top];
                        top--;
                        break;
                  case '*':
                        stack[top-1]*=stack[top];
                        top--;
                        break;
                  case '/':
                        stack[top-1]/=stack[top];
                        top--;
                        break;
                  default:
                        stack[++top]=atoi(ch.c_str());
            }
      }
      cout<<stack[0]<<endl;
}
