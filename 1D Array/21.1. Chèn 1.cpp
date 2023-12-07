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
	
	return 0;
}
