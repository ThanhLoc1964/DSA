#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    multiset<int> se;
    while(n--) {
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;


    // 1 : them phan tu vao mang
    // 2 : xoa phan tu khoi mang, neu nhieu phan tu x thi chi xoa 1
    // 3 : truy van xem x co xuat hien trong mang hay khong
    while(q--) {
        int c, x; cin >> c >> x;
        if(c == 1) {
            se.insert(x);
        } else if(c == 2) {
            se.erase(x);
        } else if(c == 3) {
            if(se.find(x) != se.end()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
        
    return 0;
}
