#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    multiset<int> se;

    while(n--) {
        int x; cin >> x;
        se.insert(x);
    }
    

    // 1 : them phan tu x vao mang 
    // 2 : xoa phan tu x khoi mang, neu x xuat hien nhieu lan xoa 1
    // 3 : chi ra gia tri dau tien cua phan tu >= x, khong ton tai in -1
    // 4 : chi ra phan tu lon nhat <= x, ko ton tai in -1

    int t; cin >> t;
    while(t--) {
        int c,x; cin >> c >> x;
        
        if(c == 1) se.insert(x);
        else if(c == 2) {
            auto it = se.find(x);
            if(it != se.end()) se.erase(it);
        }else if(c == 3) {
            auto it = se.lower_bound(x);
            if(it != se.end()) cout << *it << endl;
            else cout << "-1" << endl;
        }else if(c == 4) {
            auto it = se.upper_bound(x);
            if(it != se.begin() && it != se.end()) {
                it--;
                cout << *it << endl;
            }
            else cout << "-1" << endl;
        }

    }

    return 0;
}


