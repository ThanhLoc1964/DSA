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

	sort(a , a + n);
	for(int i = 0 ; i < n; i++) {
		if(d[a[i]] > 0) {
			cout << a[i] << " " << d[a[i]] << endl;
			d[a[i]] = 0;
		}
	}
	
	return 0;
}
