#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    set<int> se;
    while(n--) {
        int x; cin >> x;
        se.insert(x);
    }

    while(m--) {
        int x; cin >> x;
        se.insert(x);
    }

    for(auto it = se.rbegin() ; it != se.rend() ; it++) {
        cout << *it << " ";
    }


    
    return 0;
}
