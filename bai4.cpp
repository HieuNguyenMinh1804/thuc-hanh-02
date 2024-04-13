#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int n, k;
int idxmin(int a[]){
	int l = 0, r = n-1, mid, max2=a[n-1];
    while(l <= r){
        mid = (l+r)/2;
        if(a[mid] > max2) l = mid + 1;
        else r = mid - 1;
    }
	return mid;
}
int binS(int a[], int l, int r){
	int mid;
	while(l <= r){
		mid = (l+r)/2;
		if(a[mid] == k) return mid;
		else if(a[mid] > k) r = mid-1;
		else l = mid+1;
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		int pos = idxmin(a);
		if(!pos) cout << binS(a,0,n-1)+1 << endl;
		else{
			if(k > a[n-1]) cout << binS(a,0,pos-1)+1 << endl;
			else cout << binS(a,pos,n-1)+1 << endl;
		}
	}
}
