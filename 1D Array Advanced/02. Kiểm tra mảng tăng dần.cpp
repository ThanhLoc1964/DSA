#include <bits/stdc++.h>
using namespace std;


int check(int a[] , int n) {
	for(int i = 1 ; i < n ; i++) {
		if(a[i] <= a[i - 1]) return 0;
	}
	return 1;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	if(check(a , n)) cout << "Yes";
	else cout << "NO";
	
	return 0;
}
