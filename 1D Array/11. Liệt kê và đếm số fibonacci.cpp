#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll F[100];
void fibo() {
	F[0] = 0;
	F[1] = 1;
	for(int i = 2 ; i < 93; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
}

bool tim(ll x){
	for(int i = 0; i < 93 ; i++) {
		if(F[i] == x) return 1;
	}
	return 0;
}

// Notes so fibo 93 la so cuoi cung dc luu trong long long

int main() {
	fibo();
	int n; cin >> n;
	ll a[n];
	for(ll &x : a) cin >> x;

	int flag = 0;	
	for(ll x : a) {
		if(tim(x)) cout << x << " ";
		flag = 1;
	}

	if(flag == 0) cout << "NONE";

	return 0;
}	
