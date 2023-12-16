#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x , k; cin >> n >> x >> k;
	int a[n];
	for(int &x : a) cin >> x;

	vector <int> v;
	for(int x : a) v.push_back(x);

	v.insert(v.begin() + k - 1, x);
	for(int x : v) cout << x << " ";


	/* Cách 2 */
	// for(int i = n - 1; i > k ; i--) {
	// 	a[i + 1] = a[i];
	// }
	// a[k - 1] = x; 
	// for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
	
	return 0;
}
