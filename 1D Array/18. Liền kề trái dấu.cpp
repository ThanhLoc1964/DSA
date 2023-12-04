#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	if(a[0] * a[1] < 0) cout << a[0] << " ";
	for(int i = 1 ; i < n - 1 ; i++) {
		if((long long)a[i] * a[i - 1] < 0 || (long long)a[i] * a[i + 1] < 0) cout << a[i] << " "; 
	}
	if(a[n - 1] * a[n - 2] < 0) cout << a[n - 1];
	
	return 0;
}
