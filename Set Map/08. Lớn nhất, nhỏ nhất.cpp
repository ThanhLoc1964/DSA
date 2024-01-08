#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> se;

    while(n--) {
        int x; cin >> x;
        se.insert(x);
    }

    // tt1 : them phan tu x vao mang
    // tt2 : xoa moi gia tri x kkoi mang neu x ton tai trong mang
    // tt3 : tim phan tu nho nhat trong mang
    // tt4 : tim phan tu lon nhat trong mang
    int q; cin >> q;
    while(q--) {
        int c; cin >> c;
        if(c == 1) {
            int e; cin >> e;
            se.insert(e);
        } else if(c == 2) {
            int e; cin >> e;
            se.erase(e);
        }else if(c == 3) {
            cout << *se.begin() << endl;
        } else if(c == 4) cout << *se.rbegin() << endl;
    }


    
    return 0;
}
