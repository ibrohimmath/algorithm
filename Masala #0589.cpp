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

int main(){ fast
int n, m, sum = 0; cin >> n >> m; char a[n][m]; bool b[n][m]; memset(b, 0, sizeof(b));
rep(i, 0, n)
    rep(j, 0, m)
        cin >> a[i][j];
rep(i, 0, n){
    bool ok = 1;
    rep(j, 0, m)
        if(a[i][j] == 'X'){
            ok = 0;
            break;
        }
    if(ok)
        rep(j, 0, m)
            b[i][j] = 1;
} 
rep(j, 0, m){
    bool ok = 1;
    rep(i, 0, n)
        if(a[i][j] == 'X'){
            ok = 0;
            break;
        }
    if(ok)
        rep(i, 0, n)
            b[i][j] = 1;
}
rep(i, 0, n)
    rep(j, 0, m)
        sum += b[i][j];
cout << sum;        
	return 0;
}