#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, p; cin >> n >> m >> p;
	int a[n + m];
	int b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int &x : b) cin >> x;



	for(int i = m + n - 1; i >= p; i--) {
		a[i] = a[i - m];
	}

	for(int i = p ; i < m + p; i++) {
		a[i] = b[i - p];
	}

	for(int i = 0; i < n + m; i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}
