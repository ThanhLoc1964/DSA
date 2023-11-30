#include <bits/stdc++.h>
using namespace std;

int main() {
	int d[1001] = {0};
	int n; cin >> n;
	int a[n]; 
	for(int &x : a) {
		cin >> x;
		d[x]++;
	}
	int k ; cin >> k;


	/* Cach 3: Phep nhan va to hop*/ 
	int cnt = 0;
	for(int x = 0 ; x <= k/2 ; x++) {
		int y = k - x;
		if(x != y) cnt += d[x] * d[y];
		else cnt += d[x] * (d[x] - 1) / n;	
	}
	cout << cnt;


	

	/* Cach 2 %/
 	int n; cin >> n;
	int a[n];
	map<int, int> mp;
	for(int &x : a) {
		cin >> x;
		mp[x]++;
	}
	int k ; cin >> k;

	int cnt = 0;
	for(int i = 0 ; i < n ; i++) {
		cnt += mp[k - a[i]];
		if(a[i] * 2 == k) {
			cnt--;
		}
	}

	cout << cnt / 2;
	return 0;




 

	/* Cach 1*/
	// int cnt = 0;
	// for(int i = 0 ; i < n; i++) {
	// 	for(int j = i + 1; j < n ; j++) {
	// 		if(a[i] + a[j] == k) cnt++;
	// 	}
	// }	
	// cout << cnt;


	return 0;
}
