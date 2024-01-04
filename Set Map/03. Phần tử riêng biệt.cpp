#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> se;
    while(n--) {  
        int x; cin >> x;
        if(se.find(x) == se.end()) cout << x << " ";
        se.insert(x);
    }
    
    return 0;
}
