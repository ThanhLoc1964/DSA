#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    set<string> se;
    while(cin >> s) {
        se.insert(s);
    }

    auto it1 = se.begin();
    auto it2 = se.rbegin();
    cout << se.size() << endl;
    cout << *it1 << " " << *it2;
    
    return 0;
}
