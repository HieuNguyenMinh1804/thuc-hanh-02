#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	while(t--){
    	ll x, y, m; cin >> x >> y >> m;
    	x %= m;
    	ll ans = 1;
    	for(int i = 1; i <= y; ++i){
    		ans *= x;
    		ans %= m;
		}
		cout << ans % m << endl;
    }
}
