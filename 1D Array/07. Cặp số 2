#include <bits/stdc++.h>
using namespace std;


int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	/* Cach 2 */
	sort(a, a + n);
	int minVal = 1e9;
	for(int i = 1; i < n ; i++) {
		minVal = min(minVal , a[i] - a[i - 1]);
	}
	cout << minVal;


	/* Cach 1 */	
	// int minVal = 1e9;
	// for(int i = 0 ; i < n ; i++) {
	// 	for(int j = i + 1 ; j < n ; j++) {
	// 		int kc = abs(a[j] - a[i]);
	// 		minVal = min(minVal, kc);
	// 	}
	// }
	// cout << minVal;

}
