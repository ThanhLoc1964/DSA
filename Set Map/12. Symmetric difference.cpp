#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    set<int> se;
    set<int> seA;
    set<int> seB;

    while(n--) {
        int x; cin >> x;
        seA.insert(x);
    }

    while(m--) {
        int x; cin >> x;
        seB.insert(x);
    }


    for(auto x : seA) {
        if(seB.count(x) != 1) se.insert(x);
    }

    for(auto x : seB) {
        if(seA.count(x) != 1) se.insert(x);
    }

    for(auto x : se) cout << x << " ";
    
    return 0;
}
