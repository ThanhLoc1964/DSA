#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];		
	for(int &x : a) {
		cin >> x;
	}


	/* Cach 3 */ 
	int d[1001] = {0};
	for(int i = 0 ; i < n ; i++) {
		d[a[i]]++;
		if(d[a[i]] == 1) cout << a[i] << " ";
	}


	/* Cach 2 */
	// for(int i = 0 ; i < n ; i++) {
	// 	if(a[i] >= 0) {
	// 		cout << a[i] << " ";
	// 		for(int j = i + 1; j < n ; j++) {
	// 			if(a[j] == a[i]) a[j] = -1;
	// 		}
	// 	}
	// }



	/* Cach 1 */
	// for(int i = 0 ; i < n ; i++) {
	// 	int flag = 0;
	// 	for(int j = 0 ; j < i; j++) {
	// 		if(a[j] == a[i]) {
	// 			flag = 1;
	// 			break;
	// 		} 
	// 	}
	// 	if(flag == 0) cout << a[i] << " ";
	// }

	return 0;
}
