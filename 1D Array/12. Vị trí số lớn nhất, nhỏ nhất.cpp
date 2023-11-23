#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	int min_val = 1e9 , idx_min_val = 0;	
	int max_val = 1e9 , idx_max_val = 0;	
	for(int i = 0 ; i < n ; i++) {
		if(a[i] <= min_val) {
			min_val = a[i];
			idx_min_val = i;
		}

		if(a[i] > max_val){
			max_val = a[i];
			idx_max_val = i;
		}
	} 

	cout << idx_min_val << " " << idx_max_val << endl;
	return 0;
}
