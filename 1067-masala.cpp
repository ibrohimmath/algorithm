#include <bits/stdc++.h>
//#define int long long
#define ff first
#define ss second
#define endl '\n'
#define all(x) (x).begin(), (x).end()

using namespace std;
const int mod = 1e9 + 7;
 
void solve(){
	int p, q; cin >> p >> q;
	for(int i = 1; i <= p / 2; i++)
		if(i * (p - i) == q){
			cout << i << ' ' << p - i;
			return;
		}
	cout << -1;
}

signed main(void){ cin.tie(0)->sync_with_stdio(false);
	int t = 1;
	//cin >> t;
	while(t--) solve();
	return 0;
}