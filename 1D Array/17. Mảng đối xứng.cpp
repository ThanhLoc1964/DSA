#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	int flag = 1;
	for(int i = 0 ; i < n / 2 ; i++) {
		if(a[i] != a[n - i - 1]) flag = 0;
	}

	if(flag == 1) cout << "YES";
	else cout << "NO";
	
	return 0;
}
