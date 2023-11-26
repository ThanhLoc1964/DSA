#include <bits/stdc++.h>
using namespace std;


int nt(int n) {
	for(int i = 2 ; i * i <= n ; i++) {
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main() {
	int n;
	vector<int> v;
	map<int, int> mp;

// - map => thu tu tang dan
// - vector => tu tu xuat hien
// - chi luu lan dau xuat hien


	while(cin >> n) {
		if(nt(n)) {
			mp[n]++;
			if(mp[n] == 1) {
				v.push_back(n);
			}
		}
	}
	for(int x : v) {
		cout << x << " " << mp[x] << endl;
	}

	return 0;
}
