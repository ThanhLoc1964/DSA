#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;    
    
    set<int> se;
    vector<int> F(n);    
    for(int i = n - 1; i >= 0 ; i--) {
        se.insert(a[i]);
        F[i] = se.size();
    }

    // moi truy van, dem so cac gia tri khac nhau tu l toi n - 1
    int q; cin >> q;
    while(q--) {
        int l; cin >> l;
        cout << F[l] << endl;
    }
    
    return 0;
}
