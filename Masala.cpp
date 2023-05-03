#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
#define vv vector<int>
#define vc vector<vv>
#define pp pair<int, int>
#define ff first
#define ss second
#define pb push_back
#define endl '\n'
#define all(x) (x).begin(), (x).end()

using namespace std;
const int mod = 1e9 + 7;

void solve(){
	int n, x, mx = -1, ind = -1; cin >> n;
	bool sign;
	for(int i = 0; i < n; i++){
		cin >> x >> sign;
		if(!sign)
			if(x > mx) 
				mx = x,
				ind = i + 1;
	}
	cout << ind;
}

signed main(void){ cin.tie(0)->sync_with_stdio(0);
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}