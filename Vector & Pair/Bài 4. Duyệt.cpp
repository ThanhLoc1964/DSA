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

    for(vector<int>::iterator it = v.begin() + l ; it <= v.begin() + r; it++) {
        cout << *it << " ";
    }

    cout << endl;
    for(vector<int>::iterator it = v.begin() + r ; it >= v.begin() + l; it--) {
        cout << *it << " ";
    }


     
    return 0;
}
