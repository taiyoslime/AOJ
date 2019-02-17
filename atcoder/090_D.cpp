#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,k,ctn = 0;
	cin >> n >> k;
	if ( k == 0 ){
		ctn = n * n ;
	} else {
		for (ll i = k ; i <= n ; i++ ){
			ctn += n/i * (i - k);
			if( n%i - k >= 0) ctn += n%i+1-k;
		}
	}
	cout << ctn << endl;
}
