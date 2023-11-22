#include <bits/stdc++.h>
using namespace std;


int main() {
	int n; cin >> n;
	int a[n]; for(int &x : a) cin >> x;
	int x; cin >> x;

	int cntLon = 0, cntNho = 0;
	for(int i = 0 ; i < n; i++) {
		if(a[i] > x) cntLon++;
		else if(a[i] < x) cntNho++;
	}

	cout << cntLon << endl;
	cout << cntNho << endl;

	return 0;
}
