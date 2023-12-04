#include <bits/stdc++.h>
using namespace std;


bool nt(int n) {
	for(int i = 2 ; i * i <= n ; i++) {
		if(n % i == 0) return 0;
	}
	return n > 1;
}

bool thuan_nghich(int n) {
	int m = 0 , tmp = n;
	while(n) {
		m = m * 10 + n % 10; // dao nguoc so
		n /= 10;
	}
	if(tmp == m) return 1;

	return 0;
}

bool cp(int n) {
	int can = sqrt(n);
	if(can * can == n) return 1;
	else return 0;
}

int tong_chu_so(int n) {
	int sum = 0;
	while(n) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}




int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	int cnt_nt = 0, cnt_tn = 0, cnt_cp = 0, cnt_tongnt = 0;
	for(int i = 0 ; i < n ; i++) {
		if(nt(a[i])) cnt_nt++;
		if(thuan_nghich(a[i])) cnt_tn++;
		if(cp(a[i])) cnt_cp++;
		if(nt(tong_chu_so(a[i]))) cnt_tongnt++;
	}


	cout << cnt_nt << endl;	
	cout << cnt_tn << endl;	
	cout << cnt_cp << endl;	
	cout << cnt_tongnt << endl;	

		
	return 0;
}
