#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	int n ; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	ll sum = 0, tich = 1;
	int mod = 1e9 + 7;

	for(int i = 0 ; i < n ; i++) {
		// sum = sum + a[i];
		// sum = ((sum % mod) + (a[i] % mod)) % mod;
		sum = (sum + a[i]) % mod;
		tich = (tich * a[i]) % mod;

	}

	cout << sum << endl;
	cout << tich << endl;
	return 0;
}
