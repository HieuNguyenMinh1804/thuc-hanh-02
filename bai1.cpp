#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
    	string s1, s2, add = ""; cin >> s1 >> s2;
    	for(int i = 0; i < s1.size(); ++i) if(s1[i] == '6') s1[i] = '8';
    	for(int i = 0; i < s2.size(); ++i) if(s2[i] == '6') s2[i] = '8';
		if(s2.size() > s1.size()) swap(s1, s2);
		int i = s1.size()-1;
		int j = s2.size()-1;
		int nho=0;
		while(i>=0 && j>=0){
			int cong = (s1[i--]-'0') + (s2[j--]-'0') + nho;
			nho = cong/10;
			add += (char)(cong%10+'0');		
		}
		while(i>=0){
			int cong = (s1[i--]-'0') + nho;
			nho = cong/10;
			add += (char)(cong%10+'0');
		}
		if(nho==1) add += "1";
		for(int i = add.size()-1; i >= 0; --i) cout << add[i];
		cout << endl;
	}
}
