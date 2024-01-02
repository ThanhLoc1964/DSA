#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<pair<int,int>, int>> v;
    while(n > 0) {
        int x, y,z; cin >> x >> y >> z;
        v.push_back(make_pair(make_pair(x,y), z)); 
        n--;
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << it->first.first + it->first.second + it->second << " ";
    }
    
    return 0;
}
