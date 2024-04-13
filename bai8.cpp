#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int a[2001][2001], used[2001][2001];
int n, m, x, y, z, t;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

struct num{
	int x, y, dem;
};

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int test; cin >> test;
	while(test--){
		int ok = 1;
		memset(used, 0, sizeof(used));
		cin >> n >> m >> x >> y >> z >> t;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j) cin >> a[i][j];
		}
		if(a[z][t] == 0 || a[x][y] == 0){
			cout << -1 << endl;
			continue;
		}
		queue <num> q;
		q.push({x, y, 0});
		used[x][y] = 1;
		while(q.size()){
			num temp = q.front(); q.pop();
			if(temp.x == z && temp.y == t){
				cout << temp.dem << endl;
				ok = 0;
				break;
			}	
			for(int k = 0; k < 4; ++k){		
				int i1 = temp.x + dx[k];
				int j1 = temp.y + dy[k];
				if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1 && used[i1][j1] == 0){
					used[i1][j1] = 1;
					q.push({i1, j1, temp.dem + 1});
				}
			}
		}
		if(ok) cout << -1 << endl;
    }
}
