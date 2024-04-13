#include<bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n, x; cin >> n >> x; x *= 2;
		ll a[n];
		for(ll &x : a) cin >> x;
		ll p[n + 1] = {};
		ll res = 1e9;
		for(int i = 1; i <= n; ++i) p[i] += p[i-1] + a[i-1];
		for(int i = 1; i <= n; ++i){
			int idx = upper_bound(p, p + i, p[i] - x) - p;
			if(idx != i){
				idx --;
				if(p[i] - p[idx] >= x) res = min(res, 1ll*(i-idx));
			}
		}
		if(res == 1e9) cout << -1 << endl;
		else cout << res << endl;
	}
}