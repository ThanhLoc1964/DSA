#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int a[n];
	for(int &x : a ) cin >> x;

	/* Cách 2: Kỹ thuật Cửa sổ trược (Sliding Window) */
	int sum = 0;
	for(int i = 0 ; i < k; i++) sum += a[i]; 
	cout << sum << " ";
	
	for(int i = k; i < n; i++) {
		sum = sum - a[i - k] + a[i];
		cout << sum << " ";
	}
	

	
	/* Cách 1 O(n * k) */
	// for(int i = 0 ; i < n - k + 1 ; i++) {
	// 	int rs = 0;
	// 	for(int j = i; j < i + k ; j++) {
	// 		rs += a[j];
	// 	}
	// 	cout << rs << " ";
	// }
	
	return 0;
}
