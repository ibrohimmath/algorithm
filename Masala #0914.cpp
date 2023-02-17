#pragma GCC optimize("Ofast")
#pragma GCC optimize("O1")
#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>
#define ff first
#define ss second
#define rep(i, a, b) for(int i = a; i < b; i++)
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
 
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;

int main(){ fast;
int x; vector<pair<int, char>>a(26);
rep(i, 0, 26)  
	cin >> x,
	a[i] = {x, 'a' + i};
sort(all(a)); reverse(all(a));
int mx = a[0].ff; string s[mx];
int k = 0;
rep(i, 0, 26){
	rep(j, 0, (int)a[i].ff)
		s[k] += a[i].ss,
		k = (k + 1) % mx;
}
for(string x : s) cout << x;
	return 0;
}

