#include <bits/stdc++.h>
using namespace std;

int d[100001];
int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) {
		cin >> x;
		d[x]++;
	}

	int max = -1e9, valMax = -1e9;
	for(int i = 0; i < n; i++) {
		if(d[a[i]] > max) {
			max = d[a[i]];
			valMax = a[i];
		}
	}

	cout << valMax << " " << max;

	return 0;
}
