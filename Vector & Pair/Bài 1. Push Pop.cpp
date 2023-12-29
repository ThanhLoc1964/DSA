#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;

    while(n > 0 ) {
        int c; cin >> c;
        if(c == 1) {
            int a; cin >> a;
            v.push_back(a); 
        }else if(c == 2) {
            if(!v.empty()) v.pop_back();
        }

        n--;
    }

    if(v.empty()) cout << "EMPTY";
    else {
        for(auto x : v) cout << x << " ";
    }

    return 0;
}
