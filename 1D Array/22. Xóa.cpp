#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;

	int flag = -1;
	for(int i = 0 ; i < n; i++) {
		if(a[i] == x) {
			flag = i;
			break;	
		}		
	}

	if(flag != -1) {
		for(int i = flag; i < n ; i++) {
			a[i] = a[i + 1];
		}

		for(int i = 0 ; i < n - 1; i++) cout << a[i] << " ";
	} else {
		cout << "NOT FOUND";
	}

	



	
	return 0;
}
