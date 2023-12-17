#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int a[n];
	for(int &x : a ) cin >> x;

	for(int i = 0 ; i < n - k + 1 ; i++) {
		int rs = 0;
		for(int j = i; j < i + k ; j++) {
			rs += a[j];
		}
		cout << rs << " ";
	}
	
	return 0;
}
