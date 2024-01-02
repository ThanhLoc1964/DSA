#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;
    while(n > 0) {
        int x; cin >> x;
        v.push_back(x);
        n--;
    }
    int l,r; cin >> l >> r;

    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << " ";
    cout << endl;

    reverse(v.begin() + l, v.begin() + r + 1);
    for(auto x : v) cout << x << " ";

    
    return 0;
}
