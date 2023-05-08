#include <bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'
#define all(x) (x).begin(), (x).end()

using namespace std;
const int mod = 1e9 + 7;

#define int long long
void solve(){
	int n, son = 13; cin >> n;
	if(n % 400 == 0 || n % 4 == 0 && n % 100 != 0) son--;
	string s = to_string(n);
	while(s.size() != 4) s = "0" + s;
	cout << son << "/09/" << s;
} 

signed main(void){
	int t = 1;
	//cin >> t;
	while(t--) solve();
	return 0;
}