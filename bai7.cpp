#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stack<string> st;
		string temp; stringstream ss(s);
		while(ss >> temp) st.push(temp);
		while(st.size()){
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
    }
}
