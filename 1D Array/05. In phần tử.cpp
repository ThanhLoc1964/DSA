#include <bits/stdc++.h>
using namespace std;


int main() {
	int n; cin >> n;
	int a[n]; for(int &x : a) cin >> x;

	int flag = 0;
	for(int i = 0 ; i < n ; i+=2) {
		if(a[i] % 2 == 0) {
			flag = 1;
			cout << a[i] << " ";
		}
	}

	if(flag == 0) cout << "NONE";


	return 0;
}
