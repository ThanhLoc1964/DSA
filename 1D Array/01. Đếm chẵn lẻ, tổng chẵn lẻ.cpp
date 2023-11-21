#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	
	for(int i = 0 ; i < n ; i++) cin >> a[i];

	int coutChan= 0;
	int coutLe = 0;
	int sumChan = 0;
	int sumLe = 0;
	for(int i = 0 ; i < n ; i++) {
		if(a[i] % 2 == 0) {
			coutChan++;	
			sumChan += a[i];
		} else {
			coutLe++;
			sumLe += a[i];
		}
	}

	cout << coutChan << endl;
	cout << coutLe << endl;
	cout << sumChan << endl;
	cout << sumLe << endl;


	return 0;
}