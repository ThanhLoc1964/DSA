#include <bits/stdc++.h>
using namespace std;

int main() {
     int n; cin >> n;
     vector <int> v;
     while(n > 0 ) {
        int x; cin >> x;
        v.push_back(x);
        n--;
     }
     int m; cin >> m;

     while(m > 0) {
        int c; cin >> c;
        if(c == 1) {
            int i; cin >> i;
            int x; cin >> x;
            v.insert(v.begin() + i, x);
        } else if(c == 2) {
            int e; cin >> e;
            v.erase(v.begin() + e);
        }
        m--;
     }


     if(v.empty()) cout << "EMPTY";
     else {
         for(auto x : v) cout << x << " ";          
     }
    
    return 0;
}
