#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
		int n; cin >> n;
		vector<string> v(n);
		int m[10] = {};
		for(int i = 0; i < n; ++i){
			cin >> v[i];
			for(char x : v[i]) m[x - '0'] ++;
		}
		for(int i = 0; i < 10; ++i) if(m[i]) cout << i << " ";
		cout << endl;
    }
}
