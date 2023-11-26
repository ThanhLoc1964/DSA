#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int max_val = -1e9;
	for(int i = 0 ; i < n ; i++) {
		if(a[i] > max_val) {
			max_val = a[i];
			cout << max_val << " ";
		}
	}
	return 0;
}
