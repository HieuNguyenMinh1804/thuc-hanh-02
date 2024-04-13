#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s = "";
		for(int i = 1; i <= n; ++i) s += "0";
		int ok = 1;
		while(ok){
			cout << s << " ";
			int i = n-1;
			while(i >= 0 && s[i] == '1') s[i--] = '0';
			if(i == -1) ok = 0;
			else s[i] = '1';
		}
		cout << endl;
	}
}
