#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n], b[n];
	for(int &x : a) cin >> x;
	set<int> setB;
	for(int &x : b) {
		cin >> x;
		setB.insert(x);
	}	


	// setB = {1, 5, 8}
	// setB.count(5) => 1
	// setB.count(6) => 0

	for(int i = 0 ; i < n; i++) {
		if(setB.count(a[i])) {
			cout << a[i] << " ";
			setB.erase(a[i]);
		}
	}

	return 0;
}
