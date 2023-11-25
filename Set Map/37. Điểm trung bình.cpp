#include <bits/stdc++.h>
using namespace std;


double dtb(vector<pair<int, int>> v) {
	int sum1 = 0, sum2 = 0;
	for(auto it : v) {
		sum1 += it.first * it.second;
		sum2 += it.first;
	}
	return (double)sum1/sum2;
}


// Lan : {(4, 8), (2, 4), (3 ,1)}

int main() {
	map<string, vector<pair<int,int>>> mp;
	string ten;
	while(cin >> ten) {
		int stc, diem;
		cin >> stc >> diem;
		mp[ten].push_back({stc, diem});
	}

	for(auto it = mp.rbegin(); it != mp.rend(); it++) {
		cout << (*it).first << " : ";
		cout << fixed << setprecision(2) << dtb((*it).second) << endl;
	}
	
	return 0;
}
