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
int n, m, x; cin >> n >> m; bool used[10] = {0};
if(n > 10){
	cout << "NO";
	return 0;
}
rep(i, 0, n){
	int sum = 0;
	rep(j, 0, m){
		cin >> x;
		sum += x;
		if(used[x]){
			cout << "NO";
			return 0;
		}
	}
	if(sum % m){
		cout << "NO";
		return 0;
	}
	else used[x] = 1;
}
cout << "YES";
	return 0;
}