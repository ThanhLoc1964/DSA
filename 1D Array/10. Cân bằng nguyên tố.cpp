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
	for(int &x : a) {
		cin >> x;
	}


	/* Cach 2 */
	int sum = 0;
	for(int i = 0; i < n ; i++) sum += a[i]; 

	int sum_left = a[0], sum_right = 0;
	for(int i = 1; i < n - 1 ; i++) {
		sum_right = sum - sum_left - a[i];
		if(nt(sum_left) && nt(sum_right)) cout << i << " ";

		sum_left += a[i];
	} 

	
	/* Cach 1 */
	// for(int i = i ; i < n - 1; i++) {
	// 	int sum_left = 0 , sum_right = 0;
	// 	for(int j = 0 ; j < i; j++) sum_left += a[j];
	// 	for(int j = i + 1 ; j < n; j++) sum_right += a[j];
	// 	if(nt(sum_left) && nt(sum_right)) cout << i << " ";
	// }
	return 0;
}
