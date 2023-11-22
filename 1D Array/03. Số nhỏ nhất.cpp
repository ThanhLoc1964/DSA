#include <bits/stdc++.h>
using namespace std;


int main() {
	int n; cin >> n;
	int a[n]; for(int &x : a) cin >> x;

	int min = 1e9, count = 1;
	for(int i = 0 ; i < n ; i++) {
		if(a[i] < min) {
			min = a[i];
			count = 1;
		} else if(a[i] == min) count++;

	}

	cout << count;

	return 0;
}
