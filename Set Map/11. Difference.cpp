#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
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

    // tim nhung phan tu xuat hien trong mang thu nhat 
    // nhung khong xuat hien trong mang thu 2 
    // -> liet ke tu be den lon
    for(auto x : seA) {
        if(seB.find(x) == seB.end()) cout << x << " ";
    }

    
    return 0;
}
