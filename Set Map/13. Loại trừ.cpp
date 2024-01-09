#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
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
 
    // in ra cac so xuat hien trong mang 1 
    // ma khong xuat hien trong mang 2
    // -> in theo thu tu tu be den lon
    
    for(auto x : seA) {
        if(seB.count(x) == 0) cout << x << " ";
    }


    return 0;
}
