#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int a[n], b[n - k];
	for(int &x : a) cin >> x;

	for(int i = 0; i < n - k; i++) {
		b[i] = a[k + i];
	}

	for(int i = n - 1 ; i >= n - k; i--) {
		a[i] = a[i + k - n];
	}

	for(int i = 0; i < n - k; i++) {
		a[i] = b[i];
	}

	for(int i = 0 ; i < n; i++) cout << a[i] << ' ';

	return 0;
}
