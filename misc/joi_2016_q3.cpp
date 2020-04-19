#include <bits/stdc++.h>
using namespace std;
#define r(_i,_n) for(int _i=0;_i<_n;_i++)

int main(){
	int h,w,d,p;
	char m[100][100];
	int ans = 0;
	cin>>h>>w>>d;

	r(i,h){
		p = -1;
		r(j,w){
			cin>>m[i][j];
			if(m[i][j] == '#'){
				ans += j-p>d ? j-p-d : 0;
				p = j;
			}
		}
		ans += w-p>d ? w-p-d : 0;
	}
	r(i,w){
		p = -1;
		r(j,h){
			if(m[j][i] == '#'){
				ans += j-p>d ? j-p-d : 0;
				p = j;
			}
		}
		ans += h-p>d ? h-p-d : 0;
	}
	cout << ans << endl;
}
