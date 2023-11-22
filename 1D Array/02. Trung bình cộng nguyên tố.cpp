#include <bits/stdc++.h>

using namespace std;


bool nt(int n) {
	for(int i = 2 ; i * i <= n ; i++) {
		if(n % i == 0) return 0;
	}
	return n > 1;
}



int main() {
	int n; cin >> n;
	int a[n]; 
	for(int &x : a) cin >> x;

	int sum = 0 , count = 0;
	for(int i = 0 ; i < n ; i++) {
		if(a[i] > 0  &&  nt(a[i])) {
			sum += a[i];
			count++;
		}
	}
	cout << fixed << setprecision(3) << (double)sum / count << endl;

	return 0;
}
