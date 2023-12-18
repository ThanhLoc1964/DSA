#include <bits/stdc++.h>
using namespace std;

int d[1000001];
int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) {
		cin >> x;
		d[x]++;
	}

	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(d[a[i]] > 0) {
			cnt++;
			d[i] = 0;
		}

	}

	cout << cnt;

	return 0;
}
