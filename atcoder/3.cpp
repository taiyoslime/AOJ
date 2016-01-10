#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,k;
    queue<int> que;
    cin>>n>>k;
    int ans=0,sum=1,lg=0,flag=0;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(tmp==0){flag=1;continue;}
        if(k!=0){
            sum*=tmp;
            lg++;
            que.push(tmp);
            if(sum>k){
                while(sum>k){
                    sum/=que.front();
                    que.pop();
                    lg--;
                }
            }

        ans = max(lg,ans);
        }
    }
    if(flag){cout<<n<<endl;return 0;}
    cout<<ans<<endl;
}
